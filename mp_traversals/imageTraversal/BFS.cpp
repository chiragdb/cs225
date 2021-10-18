#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace cs225;

/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
  tolerance_ = tolerance;
  png_ = png;
  initial_ = start;
  int x_val = initial_.x;
  int y_val = initial_.y;
  int width_dimen = png_.width();
  int height_dimen = png_.height();
  checked.resize(width_dimen);
  queue.push(start);
  for (unsigned i = 0; i < checked.size(); i++) {
    std::vector<bool> temp = checked.at(i);
    checked.at(i).resize(height_dimen);
    unsigned s = checked.at(i).size();
    for (unsigned j = 0; j < s; j++) {
      checked.at(i).at(j) = false;
    }
  }
  checked.at(x_val).at(y_val) = true;
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this, initial_, png_, tolerance_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */
  queue.push(point);
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
  Point p = queue.front();
  queue.pop();
  return p;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return queue.front();
}

void BFS::addChecked(Point p) {
  checked.at(p.x).at(p.y) = true;
}

bool BFS::getChecked(Point p) {
  bool output = checked.at(p.x).at(p.y);
  return output;
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  if (queue.empty() == true) {
    return true;
  }
  return false;
}
