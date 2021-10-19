#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main() {

  PNG png;      
  png.readFromFile("tests/lantern.png");
  Point lamp_center(30, 30);
  FloodFilledImage lamp(png);
  

  BFS bfs(png, lamp_center, 0.4);
  DFS dfs(png, lamp_center, 0.4);

  HSLAPixel color1(21, 1, 0.5);
  HSLAPixel color2(347, 1, 0.5);

  MyColorPicker cp2(color1, color2, lamp_center);
  SolidColorPicker solid(color2);

  lamp.addFloodFill(bfs, cp2);
  lamp.addFloodFill(dfs, solid);

  Animation animation = lamp.animate(1000);

  PNG final = animation.getFrame( animation.frameCount() - 1 );
  final.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
