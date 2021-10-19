
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

  // @todo [Part 3]
  // - The code below assumes you have an Animation called `animation`
  // - The code provided below produces the `myFloodFill.png` file you must
  //   submit Part 3 of this assignment -- uncomment it when you're ready.
  
  // PNG png;
  // //png.readFromFile("DarthVader.png");
  // png.readFromFile("")
  // FloodFilledImage darth_vader(png);

  // DFS dfs(png, Point(40, 40), 0.05);
  // HSLAPixel temp(44, 1, 1);
  // MyColorPicker color(temp);
  // darth_vader.addFloodFill(dfs, color);


  // Animation a = darth_vader.animate(1000);
  // PNG final = a.getFrame(a.frameCount() - 1);
  // final.writeToFile("myFloodFill.png");
  // a.write("myFloodFill.gif");

  return 0;
}
