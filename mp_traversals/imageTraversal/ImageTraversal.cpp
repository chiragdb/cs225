#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

bool ImageTraversal::Iterator::isValid(Point p) {
  if (p.x < png_.width()) {
    if (p.y < png_.height()) {
      return true;
    }
  }
  return false;
}

ImageTraversal::Iterator::Iterator(ImageTraversal* traversal, Point point, PNG png, double tolerance) {
  initial_ = point;
  trav = traversal;
  curr_ = trav->peek();
  png_ = png;
  tolerance_ = tolerance;
  completed = false;
}

/**
 * Default iterator constructor.
 */

ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  completed = true;
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  Point p = trav->pop();
  trav->addChecked(p);

  int x_right = (p.x + 1);
  int x_left = (p.x - 1);
  int y_top = (p.y - 1);
  int y_bottom = (p.y + 1);

  Point to_right(x_right, p.y);
  Point to_left(x_left, p.y);
  Point top(p.x, y_top);
  Point bottom(p.x, y_bottom);

  if (isValid(to_right) == true) {
    HSLAPixel& init = png_.getPixel(initial_.x, initial_.y);
    HSLAPixel& pix = png_.getPixel(to_right.x, to_right.y);
    double delta_val = calculateDelta(init, pix);
    if (delta_val < tolerance_) {
      trav->add(to_right);
    }
  }
  
  if (isValid(bottom) == true) {
    HSLAPixel& init = png_.getPixel(initial_.x, initial_.y);
    HSLAPixel& pix = png_.getPixel(bottom.x, bottom.y);
    double delta_val = calculateDelta(init, pix);
    if (delta_val < tolerance_) {
      trav->add(bottom);
    }
  }
  
  if (isValid(to_left) == true) {
    HSLAPixel& init = png_.getPixel(initial_.x, initial_.y);
    HSLAPixel& pix = png_.getPixel(to_left.x, to_left.y);
    double delta_val = calculateDelta(init, pix);
    if (delta_val < tolerance_) {
      trav->add(to_left);
    }
  }

  if (isValid(top) == true) {
    HSLAPixel& init = png_.getPixel(initial_.x, initial_.y);
    HSLAPixel& pix = png_.getPixel(top.x, top.y);
    double delta_val = calculateDelta(init, pix);
    if (delta_val < tolerance_) {
      trav->add(top);
    }
  }

  while(trav->empty() == false && (trav->getChecked(trav->peek()))) {
    //std::cout << "infinite" << std::endl;
    trav->pop();
  }

  if (trav->empty() == true) {
    completed = true;
    return *this;
  } else {
    Point p = trav->peek();
    curr_ = p;
    return *this;
  }
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return curr_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  return !((completed) && (other.completed));
}

