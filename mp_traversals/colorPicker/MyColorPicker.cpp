#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */

MyColorPicker::MyColorPicker(HSLAPixel pix) {
  pixel = pix;
}

HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {

  pixel.h = (2*(0.7 * x)) + (2*(4.4 * y));

  /* @todo [Part 3] */
  return pixel;
}
