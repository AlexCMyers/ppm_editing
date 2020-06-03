#ifndef POPPIXEL_H
#define POPPIXEL_H

#include "Pixel.h"

class PopPixel: public Pixel{
    private:
        int x, y;
    public:
        PopPixel();
        PopPixel(const PopPixel&);
        PopPixel(int, int, const Pixel&);
        PopPixel(int, int, unsigned char, unsigned char, unsigned char);

        ~PopPixel();

        static bool sortXY(const PopPixel&, const PopPixel&);
        
        bool isSimilar(const PopPixel&);

}

#endif