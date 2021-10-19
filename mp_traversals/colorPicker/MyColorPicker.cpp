#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"
#include <cmath>
using namespace cs225;


 MyColorPicker::MyColorPicker(HSLAPixel first_color, HSLAPixel second_color, Point p) {
  c1 = first_color;
  c2 = second_color;
  start = p;
 }

HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  double x_difference = x - start.x;
  double y_difference = y - start.y;

  double h = 100 * (x_difference + y_difference);
  if (h >= 360) { 
    h = h - 360;
  }

  return HSLAPixel(h, 1, 0.7);
}
