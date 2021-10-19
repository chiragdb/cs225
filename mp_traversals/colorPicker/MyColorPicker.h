#pragma once

#include "ColorPicker.h"
#include "../cs225/HSLAPixel.h"
#include "../Point.h"

using namespace cs225;

/**
 * A color picker class using your own color picking algorithm
 */
class MyColorPicker : public ColorPicker {
public:
  MyColorPicker(HSLAPixel first_color, HSLAPixel second_color, Point p);
  HSLAPixel getColor(unsigned x, unsigned y);

private:
  HSLAPixel c1;
  HSLAPixel c2;
  Point start;

};