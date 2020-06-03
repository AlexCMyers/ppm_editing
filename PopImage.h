#ifndef POPIMAGE_H
#define POPIMAGE_H

#include "PopPixel.h"
#include <vector>



class PopImage: public Image{
    private:
        //Vector of poppixels to be compared to in order to determine groupings of pixels
        std::vector<PopPixel> guidePixels;
        //vector of all poppixels grouped by brightness
        std::vector<PopPixel> sortedPix;
        
        //applies the artistic affect to the image based on its own colors 
        //called in constructor
        void pop();

    public:
        static enum Color{
            RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW
        }
        
        PopImage();
        PopImage(const PopImage&);

        //applies artisitc affect to the image based on Colors
        void pop(Color);
        void pop(Color, Color);


};

#endif