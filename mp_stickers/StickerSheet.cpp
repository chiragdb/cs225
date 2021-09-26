/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#include "Image.h"
#include <iostream>
#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image& picture, unsigned max) {
    img = new Image();
    *img = picture;
    max_ = max;
    x_cord = new unsigned[max_];
    y_cord = new unsigned[max_];
    is_empty = new bool[max_];
    num_stickers = 0;
    stickers = new Image*[max];
    for (unsigned i = 0; i < max; i++) {
        stickers[i] = new Image();
        x_cord[i] = 0;
        y_cord[i] = 0;
        is_empty[i] = false;
    } 
}
~StickerSheet();
StickerSheet(const StickerSheet& other);
const StickerSheet& operator=(const StickerSheet& other);
void changeMaxStickers();
int addSticker(image& sticker, unsigned x, unsigned y);
bool translate(unsigned index, unsigned x, unsigned y);
void removeSticker(unsigned index);
Image* getSticker(unsigned index) const;
Image render() const;

