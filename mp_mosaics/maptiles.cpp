/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    MosaicCanvas* output = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    
    map<Point<3>, TileImage*> image_map;
    vector<Point<3>> point_vect;

    vector<TileImage>::iterator iter = theTiles.begin();
    
    while (iter != theTiles.end()) {
        Point<3> temp = convertToXYZ(iter->getAverageColor());
        image_map[temp] = &*iter;
        point_vect.push_back(temp);
        iter++;
    }

    KDTree<3> kd_tree(point_vect);
    int rowVal = output->getRows();
    int colVal = output->getColumns();
    for (int i = 0; i < rowVal; i++) {
        for (int j = 0; j < colVal; j++) {
            Point<3> p = convertToXYZ(theSource.getRegionColor(i, j));
            Point<3> neighbor = kd_tree.findNearestNeighbor(p);
            output->setTile(i, j, image_map[neighbor]);
        }
    }
    return output;
}

