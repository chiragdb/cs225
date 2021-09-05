#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>


void rotate(std::string inputFile, std::string outputFile) {
  cs225::PNG input;
  input.readFromFile(inputFile);
  unsigned int w = input.width();
  unsigned int h = input.height();
  cs225::PNG output(w, h);
  for (unsigned int x = 0; x < w; x++) {
    for (unsigned int y = 0; y < h; y++) {
      output.getPixel(x, y) = input.getPixel(w-x-1, h-y-1);
    }
  }
  output.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  for (unsigned int x = 0; x < width; x++) {
    for (unsigned int y = 0; y < height; y++) {
      cs225::HSLAPixel &pix = png.getPixel(x,y);
      pix.h = (x * 0.7) + (y * 1.4);
      pix.l = 3.7 * y;
      pix.s = 0.8 * (x + y);
    }
  }
  return png;
}
