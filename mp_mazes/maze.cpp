
//#include "dsets.h"
#include <vector>
#include "cs225/HSLAPixel.h"
#include "maze.h"
#include "cs225/PNG.h"
using namespace cs225;
#include "dsets.h"
#include <map>
#include <queue>
#include <stack>
#include <cstdlib>

SquareMaze::SquareMaze() {
    width_ = 0;
    height_ = 0;
}

void SquareMaze::makeMaze(int width, int height) {
    int dimensions = width * height;
    width_ = width;
    height_ = height;
    sets.addelements(dimensions);
    for (int i = 0; i < dimensions; i++) {
        std::pair<bool, bool> pair;
        pair.first = true;
        pair.second = true;
        vect.push_back(pair);
    }

    int temp_val = 0;
    while (dimensions - 1 > temp_val) {
        int x_val = rand() % width_;
        int y_val = rand() % height_;
        bool wall_val = rand() % 2;

        if (wall_val == true) {
            int temp = (x_val + y_val*width_);
            if ((vect[temp].first == true) && (x_val < width_ - 1)) {
                if (sets.find(temp) != sets.find(x_val + y_val*width_+1)) {
                    sets.setunion(sets.find(temp), sets.find(x_val + y_val*width_+1));
                    temp_val++;
                    vect[temp].first = false;
                }
            }
        } else {
            int temp = (x_val + y_val*width_);
            if ((vect[temp].second == true) && (y_val < height_ - 1)) {
                if (sets.find(temp) != sets.find(x_val + (y_val + 1)*width_)) {
                    sets.setunion(sets.find(temp), sets.find(x_val + (y_val + 1)*width_));
                    temp_val++;
                    vect[temp].second = false;
                }
            }
        }
    }
}

bool SquareMaze::canTravel(int x_cord, int y_cord, int direction) {
    if (direction == 0) {
        if (x_cord >= width_ - 1) {
            return false;
        }
        bool temp = vect[x_cord + y_cord*width_].first;
        return !temp;
    }
    if (direction == 1) {
        if (y_cord >= height_ - 1) {
            return false;
        }
        bool temp = vect[x_cord + y_cord*width_].second;
        return !temp;
    }
    if (direction == 2) {
        if (1 > x_cord) {
            return false;
        }
        bool temp = vect[x_cord - 1 + y_cord*width_].first;
        return !temp;
    }
    if (direction == 3) {
        if (1 > y_cord) {
            return false;
        }
        bool temp = vect[x_cord + (y_cord-1)*width_].second;
        return !temp;
    }
    return false;
}

void SquareMaze::setWall(int x_cord, int y_cord, int direction, bool exists) {
    if (direction == 0) {
        vect[x_cord + y_cord*width_].first = exists;
    } else if (direction == 1) {
        vect[x_cord + y_cord*width_].second = exists;
    }
}

std::vector<int> SquareMaze::solveMaze() {
    std::map<int, int> map;
    std::vector<bool> checked;
    std::queue<int> travelled;
    std::vector<int> last;
    std::vector<int> output;
    std::stack<int> s;
    int dimension = width_ * height_;
    for (int i =0; i < dimension; i++) {
        checked.push_back(false);
    }

    checked[0] = true;
    travelled.push(0);

    while(travelled.empty() == false) {
        int temp = travelled.front();
        int x_val = temp % width_;
        int y_val = temp / width_;
        travelled.pop();

        if (height_ - 1 == y_val) {
            last.push_back(temp);
        }

        if (canTravel(x_val, y_val, 0) == true) {
            if (checked[temp + 1] == false) {
                checked[temp + 1] = true;
                std::pair<int, int> temp_pair;
                temp_pair.first = temp + 1;
                temp_pair.second = temp;
                map.insert(temp_pair);
                travelled.push(temp + 1);
            }
        }
        if (canTravel(x_val, y_val, 1) == true) {
            if (checked[temp + width_] == false) {
                checked[temp + width_] = true;
                std::pair<int, int> temp_pair;
                temp_pair.first = temp + width_;
                temp_pair.second = temp;
                map.insert(temp_pair);
                travelled.push(temp + width_);
            }
        }
        if (canTravel(x_val, y_val, 2) == true) {
            if (checked[temp - 1] == false) {
                checked[temp - 1] = true;
                std::pair<int, int> temp_pair;
                temp_pair.first = temp - 1;
                temp_pair.second = temp;
                map.insert(temp_pair);
                travelled.push(temp - 1);
            }
        }
        if (canTravel(x_val, y_val, 3) == true) {
            if (checked[temp - width_] == false) {
                checked[temp - width_] = true;
                std::pair<int, int> temp_pair;
                temp_pair.first = temp - width_;
                temp_pair.second = temp;
                map.insert(temp_pair);
                travelled.push(temp - width_);
            }
        }
    }

    int final = width_ - 1;
    while(last[final] == last[final - 1]) {
        final = final - 1;
    }
    int starting_point = last[final];

    while (starting_point != 0) {
        int before = map[starting_point];

        if (starting_point == before + 1) {
            s.push(0);
        } else if (starting_point == before + width_) {
            s.push(1);
        } else if (starting_point == before - 1) {
            s.push(2);
        } else if (starting_point == before - width_) {
            s.push(3);
        }
        starting_point = before;
    }
    int stack_size = s.size();
    for (int i = 0; i < stack_size; i++) {
        output.push_back(s.top());
        s.pop();
    }

    return output;
}


cs225::PNG* SquareMaze::drawMaze() {
    int width_dimension = width_ * 10 + 1;
    int height_dimension = height_ * 10 + 1;
    cs225::PNG* output = new PNG(width_dimension, height_dimension);
    for (int i = 0; i < width_; i++) {
        for (int j = 0; j < height_; j++) {
            if (j == 0) {
                for (unsigned a = 0; a < 10; a++) {
                    if ((i * 10 + a > 9) || (i * 10 + a < 1)) {
                        HSLAPixel& pix = output->getPixel(i * 10 + a, 0);
                        pix.l = 0;
                    }
                }
            }
            if (i == 0) {
                for (unsigned a = 0; a < 10; a++) {
                    HSLAPixel& pix = output->getPixel(0, j * 10 + a);
                    pix.l = 0;
                }
            }
            if (canTravel(i, j, 1) == false) {
                for (unsigned a = 0; a <= 10; a++) {
                    HSLAPixel& pix = output->getPixel(i * 10 + a, (j + 1) * 10);
                    pix.l = 0;
                }
            }
            if (canTravel(i, j, 0) == false) {
                for (unsigned a = 0; a <= 10; a++) {
                    HSLAPixel& pix = output->getPixel((i + 1) * 10, j * 10 + a);
                    pix.l = 0;
                }
            }
        }
    }
    return output;
}


cs225::PNG* SquareMaze::drawMazeWithSolution() {
    cs225::PNG* maze = drawMaze();
    std::vector<int> solved = solveMaze();
    int x_cord = 5;
    int y_cord = 5;

    for (unsigned i = 0; i < solved.size(); i++) {
        if (solved[i] == 0) {
            for (int j = 0; j < 10; j++) {
                HSLAPixel& pix = maze->getPixel(x_cord, y_cord);
                pix.l = 0.5;
                pix.h = 0;
                pix.s = 1;
                x_cord++;
            }
        }
        if (solved[i] == 1) {
            for (int j = 0; j < 10; j++) {
                HSLAPixel& pix = maze->getPixel(x_cord, y_cord);
                pix.l = 0.5;
                pix.h = 0;
                pix.s = 1;
                y_cord++;
            }
        }
        if (solved[i] == 2) {
            for (int j = 0; j < 10; j++) {
                HSLAPixel& pix = maze->getPixel(x_cord, y_cord);
                pix.l = 0.5;
                pix.h = 0;
                pix.s = 1;
                x_cord--;
            }
        }
        if (solved[i] == 3) {
            for (int j = 0; j < 10; j++) {
                HSLAPixel& pix = maze->getPixel(x_cord, y_cord);
                pix.l = 0.5;
                pix.h = 0;
                pix.s = 1;
                y_cord--;
            }
        }
    }

    HSLAPixel& temp = maze->getPixel(x_cord, y_cord);
    x_cord = x_cord - 4;
    y_cord = y_cord + 5;
    temp.a = 1;
    temp.s = 1;
    temp.h = 0;
    temp.l = 0.5;

    for (int iter = 0; iter < 9; iter++) {
        HSLAPixel& pix = maze->getPixel(x_cord, y_cord);
        pix.l = 1;
        pix.a = 1;
        x_cord++;
    }
    return maze;
}
