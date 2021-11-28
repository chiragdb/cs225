/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include "Image.h"
#include <iostream>

class StickerSheet {
    public:
        StickerSheet(const Image& picture, unsigned max);
        ~StickerSheet();
        StickerSheet(const StickerSheet& other);
        const StickerSheet& operator=(const StickerSheet& other);
        void changeMaxStickers(unsigned max);
        void clear();
        int addSticker(Image& sticker, unsigned x, unsigned y);
        bool translate(unsigned index, unsigned x, unsigned y);
        void removeSticker(unsigned index);
        Image* getSticker(unsigned index) const;
        Image render() const;
        void duplicate(const StickerSheet& other);
    
    private:
        Image img;
        Image** stickers;
        unsigned* x_cord;
        unsigned* y_cord;
        unsigned max_;
        unsigned num_stickers;
};