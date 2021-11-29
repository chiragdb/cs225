#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image tiger;
  Image one;
  Image two;
  Image three;
  Image four;
  Image five;

  tiger.readFromFile("tiger.png");
  one.readFromFile("foz_one.png");
  two.readFromFile("foz_two.png");
  three.readFromFile("foz_three.png");
  four.readFromFile("foz_four.png");
  five.readFromFile("foz_five.png");

  one.scale(0.07);
  two.scale(0.04);
  three.scale(0.02);
  four.scale(0.05);
  five.scale(0.03);

  StickerSheet sheet(tiger, 5);
  sheet.addSticker(one, 0, 0);
  sheet.addSticker(two, 310, 300);
  sheet.addSticker(three, 300, 0);
  sheet.addSticker(four, 300, 250);
  sheet.addSticker(five, 100, 400);

  Image output = sheet.render();
  output.writeToFile("myImage.png");

  return 0;
}
