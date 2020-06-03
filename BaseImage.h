/* Image class
 * Designed to work with P2, P3, P5, and P6 ppm images
 * Type: signals the kind of ppm image (options above)
*/
#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <iostream>
#include <fstream>
#include "Pixel.h"

class Image{
    private:
        std::string type;
        int width;
        int height;
        int maxVal;

        Pixel** pixels;
    
    public:
        //constructors
        Image();
        Image(ifstream&);
        Image(Image&);

        //destructor
        ~Image();

        int getWidth() const;
        int getHeight() const;

        void operator=(const Image&);
        
        void print(ofstream&);
        void printAsP2(ofstream&);
        void printAsP3(ofstream&);
        void printAsP5(ofstream&);
        void printAsP6(ofstream&);
        /* Image Editing */

        //Resizes current image based to be parameter image with specified width and height
        void resize(const Image&, int, int)
        //Resizes current image based on new width and height
        void resize(int, int);
        //rotates image 90 degrees counterclockwise
        void rotateLeft();
        //rotates image 90 degrees clockwise
        void rotateRight();
    

}