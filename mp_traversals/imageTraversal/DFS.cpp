#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"


/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * 
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
  tolerance_ = tolerance;
  png_ = png;
  initial_ = start;
  int x_val = initial_.x;
  int y_val = initial_.y;
  int width_dimen = png_.width();
  int height_dimen = png_.height();
  checked.resize(width_dimen);
  stack.push(start);
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
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this, initial_, png_, tolerance_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */
  stack.push(point);
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
  Point p = stack.top();
  stack.pop();
  return p;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  return stack.top();
}

void DFS::addChecked(Point p) {
  checked.at(p.x).at(p.y) = true;
}

bool DFS::getChecked(Point p) {
  bool output = checked.at(p.x).at(p.y);
  return output;
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  if (stack.empty() == true) {
    return true;
  }
  return false;
}
