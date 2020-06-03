#ifndef PIXEL_H
#define PIXEL_H

class Pixel{
    protected:
        unsigned char r;
        unsigned char g;
        unsigned char b;

    public:
        Pixel();
        Pixel(Pixel&);
        Pixel(unsigned char, unsigned char, unsigned char);

        ~Pixel();

        void operator=(const Pixel&);
        bool operator==(const Pixel&)const;

        void setRGB(unsigned char, unsigned char, unsigned char);

        //returns average value for r, g, and b
        int brightness() const;



};