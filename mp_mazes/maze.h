/* Your code here! */
#pragma once
#include "dsets.h"
#include <vector>
#include "cs225/HSLAPixel.h"
#include "cs225/PNG.h"
using namespace cs225;
#include <map>
#include <queue>
#include <stack>



class SquareMaze {
    public:
        SquareMaze();
        void makeMaze(int width, int height);
        bool canTravel(int x_cord, int y_cord, int direction);
        void setWall(int x_cord, int y_cord, int direction, bool exists);
        std::vector<int> solveMaze();
        PNG* drawMaze();
        PNG* drawMazeWithSolution();

    private:
        int width_;
        int height_;
        std::vector<std::pair<bool, bool>> vect;
        DisjointSets sets;
};