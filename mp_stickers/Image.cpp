#include "Image.h"
#include "cs225/PNG.h"

void Image::lighten() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.l + 0.1;
            if (new_val <= 1) {
                pixel.l = new_val;
            } else {
                pixel.l = 1;
            }
        }
    }
}

void Image::lighten(double amount){
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.l + amount;
            if (new_val <= 1) {
                pixel.l = new_val;
            } else {
                pixel.l = 1;
            }
        }
    }
}

void Image::darken() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.l - 0.1;
            if (new_val >= 0) {
                pixel.l = new_val;
            } else {
                pixel.l = 0;
            }
        }
    }
}

void Image::darken(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.l - amount;
            if (new_val >= 0) {
                pixel.l = new_val;
            } else {
                pixel.l = 0;
            }
        }
    }
}

void Image::saturate() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.s + 0.1;
            if (new_val <= 1) {
                pixel.s = new_val;
            } else {
                pixel.s = 1;
            }
        }
    }
}

void Image::saturate(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.s + amount;
            if (new_val <= 1) {
                pixel.s = new_val;
            } else {
                pixel.s = 1;
            }
        }
    }
}
void Image::desaturate() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.s - 0.1;
            if (new_val >= 0) {
                pixel.s = new_val;
            } else {
                pixel.s = 0;
            }
        }
    }
}

void Image::desaturate(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x,y);
            double new_val = pixel.s - amount;
            if (new_val >= 0) {
                pixel.s = new_val;
            } else {
                pixel.s = 0;
            }
        }
    }
}

void Image::grayscale() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x, y);
            pixel.s = 0;
        }
    }
}

void Image::rotateColor(double degrees) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel& pixel = getPixel(x, y);
            pixel.h = pixel.h + degrees;
            while (pixel.h < 0) {
                pixel.h = pixel.h + 360.0;
            }
            while (pixel.h > 360) {
                pixel.h = pixel.h - 360.0;
            }
        }
    }
}

void Image::illinify() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            cs225::HSLAPixel &pixel = getPixel(x, y);
            double min_boundary_blue = ((216 - 11)/2) + 11;
            double max_boundary_blue = ((341 - 216)/2) + 216;
            if (pixel.h >= min_boundary_blue && pixel.h < max_boundary_blue) {
                pixel.h = 216;
            } else {
                pixel.h = 11;
            }
        }
    }
}

void Image::scale(double factor) {
    Image new_png = Image(*this);
    unsigned new_width = width() * factor;
    unsigned new_height = height() * factor;
    resize(new_width, new_height);
    if (factor == 1.0) {
        return;
    }
    for (unsigned x = 0; x < new_width; x++) {
        for (unsigned y = 0; y < new_height; y++) {
            cs225::HSLAPixel& pixel = getPixel(x, y);
            cs225::HSLAPixel& new_pixel = new_png.getPixel(x / factor, y / factor);
            pixel = new_pixel;
        }
    }
}
void Image::scale(unsigned w, unsigned h) {
    PNG* new_png = new PNG(*this);
    double new_w = w / width();
    double new_h = h / height();
    resize(w, h);
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {
            unsigned width = x / new_w;
            unsigned height = y / new_h;
            cs225::HSLAPixel& pixel = getPixel(x, y);
            cs225::HSLAPixel& new_pixel = new_png->getPixel(width, height);
            pixel = new_pixel;
        }
    }
}