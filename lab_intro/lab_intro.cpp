/**
 * @file lab_intro.cpp
 * Implementations of image manipulation functions.
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "lab_intro.h"

using cs225::HSLAPixel;
using cs225::PNG;

/**
 * Returns an image that has been transformed to grayscale.
 *
 * The saturation of every pixel is set to 0, removing any color.
 *
 * @return The grayscale image.
 */
PNG grayscale(PNG image) {
  /// This function is already written for you so you can see how to
  /// interact with our PNG class.
  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {
      HSLAPixel & pixel = image.getPixel(x, y);

      // `pixel` is a pointer to the memory stored inside of the PNG `image`,
      // which means you're changing the image directly.  No need to `set`
      // the pixel since you're directly changing the memory of the image.
      pixel.s = 0;
    }
  }

  return image;
}



/**
 * Returns an image with a spotlight centered at (`centerX`, `centerY`).
 *
 * A spotlight adjusts the luminance of a pixel based on the distance the pixel
 * is away from the center by decreasing the luminance by 0.5% per 1 pixel euclidean
 * distance away from the center.
 *
 * For example, a pixel 3 pixels above and 4 pixels to the right of the center
 * is a total of `sqrt((3 * 3) + (4 * 4)) = sqrt(25) = 5` pixels away and
 * its luminance is decreased by 2.5% (0.975x its original value).  At a
 * distance over 160 pixels away, the luminance will always decreased by 80%.
 * 
 * The modified PNG is then returned.
 *
 * @param image A PNG object which holds the image data to be modified.
 * @param centerX The center x coordinate of the crosshair which is to be drawn.
 * @param centerY The center y coordinate of the crosshair which is to be drawn.
 *
 * @return The image with a spotlight.
 */
PNG createSpotlight(PNG image, int centerX, int centerY) {
  for (unsigned int x = 0; x < image.width(); x++) {
    for (unsigned int y = 0; y < image.height(); y++) {
      HSLAPixel &pixel = image.getPixel(x, y);
      int x_distance = centerX - x;
      int y_distance = centerY - y;
      double distance_from_center = sqrt((x_distance * x_distance) + (y_distance * y_distance));
      if (distance_from_center < 160) {
        double decrease_amount = 0.005 * distance_from_center;

        pixel.l = (pixel.l * (1 - decrease_amount));
      } else {
        pixel.l = (pixel.l * 0.2);
      }
    }
  }
  return image;
}
 

/**
 * Returns a image transformed to Illini colors.
 *
 * The hue of every pixel is set to the a hue value of either orange or
 * blue, based on if the pixel's hue value is closer to orange than blue.
 *
 * @param image A PNG object which holds the image data to be modified.
 *
 * @return The illinify'd image.
**/

// illini orange = 11 and blue = 216
PNG illinify(PNG image) {
  for (unsigned int x = 0; x < image.width(); x++) {
    for (unsigned int y = 0; y < image.height(); y++) {
      HSLAPixel &pixel = image.getPixel(x, y);
      double min_boundary_blue = ((216 - 11)/2) + 11;
      double max_boundary_blue = ((341 - 216)/2) + 216;
      if (pixel.h >= min_boundary_blue && pixel.h < max_boundary_blue) {
        pixel.h = 216;
      } else {
        pixel.h = 11;
      }
    }
  }
  return image;
}
 

/**
* Returns an immge that has been watermarked by another image.
*
* The luminance of every pixel of the second image is checked, if that
* pixel's luminance is 1 (100%), then the pixel at the same location on
* the first image has its luminance increased by 0.2.
*
* @param firstImage  The first of the two PNGs to be averaged together.
* @param secondImage The second of the two PNGs to be averaged together.
*
* @return The watermarked image.
*/
PNG watermark(PNG firstImage, PNG secondImage) {
  unsigned largest_width = 0;
  unsigned largest_height = 0;
  if (firstImage.width() >= secondImage.width()) {
    largest_width = firstImage.width();
  } else {
    largest_width = secondImage.width();
  }
  if (firstImage.height() >= secondImage.height()) {
    largest_height = firstImage.height();
  } else {
    largest_height = secondImage.height();
  }
  for (unsigned int x = 0; x < largest_width; x++) {
    for (unsigned int y = 0; y < largest_height; y++) {
      HSLAPixel &pixel_one = firstImage.getPixel(x, y);
      HSLAPixel &pixel_two = secondImage.getPixel(x, y);
      if (pixel_two.l == 1.0) {
        pixel_one.l = fmin(pixel_one.l + 0.2, 1.0);
      }
    }
  }
  return firstImage;
}
