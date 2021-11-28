/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#include "Image.h"
#include <iostream>
#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image& picture, unsigned max) {
    max_ = max;
    img = picture;
    stickers = new Image* [max];
    x_cord = new unsigned[max];
    y_cord = new unsigned[max];
    for (unsigned i = 0; i < max; i++) {
        stickers[i] = nullptr;
    }
    num_stickers = 0;
}

void StickerSheet::clear() {
    for (unsigned i = 0; i < num_stickers; i++) {
        delete stickers[i];
        stickers[i] = nullptr;
    }
    delete[] x_cord;
    x_cord = nullptr;
    delete[] y_cord;
    y_cord = nullptr;
    delete[] stickers;
    stickers = nullptr;
}

StickerSheet::~StickerSheet() {
    clear();
}

void StickerSheet::duplicate(const StickerSheet& other) {
    num_stickers = other.num_stickers;
    img = other.img;
    max_ = other.max_;
    x_cord = new unsigned[max_];
    y_cord = new unsigned[max_];
    stickers = new Image* [max_];
    for (unsigned i = 0; i < max_; i++) {
        stickers[i] = nullptr;
    }
    for (unsigned i = 0; i < num_stickers; i++) {
        stickers[i] = new Image();
        *stickers[i] = *other.stickers[i];
        y_cord[i] = other.y_cord[i];
        x_cord[i] = other.x_cord[i];
    }
}


StickerSheet::StickerSheet(const StickerSheet& other) {
    duplicate(other);
}

const StickerSheet& StickerSheet::operator=(const StickerSheet& other) {
    clear();
    duplicate(other);
    return *this;
}

void StickerSheet::changeMaxStickers(unsigned max) {
    if (num_stickers == max) {
        return;
    }
    Image** new_stickers = new Image*[max];
    for (unsigned i = 0; i < max; i++) {
        new_stickers[i] = nullptr;
    }
    unsigned* new_xcord = new unsigned[max];
    unsigned* new_ycord = new unsigned[max];
    if (num_stickers >= max) {
        for (unsigned i = 0; i < max; i++) {
            new_stickers[i] = new Image();
            *new_stickers[i] = *stickers[i];
            new_xcord[i] = x_cord[i];
            new_ycord[i] = y_cord[i];
        }
        num_stickers = max;
    } else {
        for (unsigned i = 0; i < num_stickers; i++) {
            new_stickers[i] = new Image();
            *new_stickers[i] = *stickers[i];
            new_xcord[i] = x_cord[i];
            new_ycord[i] = y_cord[i];
        }
    }
    clear();
    stickers = new_stickers;
    new_stickers = nullptr;
    x_cord = new_xcord;
    y_cord = new_ycord;
    new_xcord = nullptr;
    new_ycord = nullptr;
    max_ = max;
}

int StickerSheet::addSticker(Image& sticker, unsigned x, unsigned y) {
    if (num_stickers < max_) {
        if (stickers[num_stickers] == nullptr) {
            stickers[num_stickers] = new Image();
        }
        *stickers[num_stickers] = sticker;
        x_cord[num_stickers] = x;
        y_cord[num_stickers] = y;
        num_stickers = num_stickers + 1;
        return (num_stickers - 1);
    }
    return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    if (num_stickers > index) {
        x_cord[index] = x;
        y_cord[index] = y;
        return true;
    } else {
        return false;
    }
}

void StickerSheet::removeSticker(unsigned index) {
    if (num_stickers > index) {
        for (unsigned i  = index; i < (num_stickers - 1); i++) {
            *stickers[i] = *stickers[i + 1];
            x_cord[i] = x_cord[i + 1];
            y_cord[i] = y_cord[i + 1];
        }
        delete stickers[num_stickers - 1];
        stickers[num_stickers - 1] = nullptr;
        num_stickers--;
    }
}

Image* StickerSheet::getSticker(unsigned index) const {
    if (num_stickers > index) {
        return stickers[index];
    }
    return nullptr;
}

Image StickerSheet::render() const {
    Image output;
    unsigned w = img.width();
    unsigned h = img.height();
    for (unsigned i = 0; i < num_stickers; i++) {
        if (stickers[i] != nullptr) {
            if (x_cord[i] + stickers[i]->width() > w) {
                w = x_cord[i] + stickers[i]->width();
            }
            if (y_cord[i] + stickers[i]->height() > h) {
                h = y_cord[i] + stickers[i]->height();
            }
        }
    }
    output = img;
    output.resize(w, h);
    for (unsigned i = 0; i < num_stickers; i++) {
        if (stickers[i] != nullptr) {
            for (unsigned wid = x_cord[i]; wid < (x_cord[i] + stickers[i]->width()); wid++) {
                for (unsigned hei = y_cord[i]; hei < (y_cord[i] + stickers[i]->height()); hei++) {
                    if (stickers[i]->getPixel((wid - x_cord[i]), (hei - y_cord[i])).a != 0) {
                        output.getPixel(wid, hei) = stickers[i]->getPixel((wid - x_cord[i]), (hei - y_cord[i]));
                    }
                }
            }
        }
    }
    return output;
}

