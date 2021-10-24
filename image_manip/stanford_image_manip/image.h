#ifndef IMAGE_H
#define IMAGE_H
#include "PNG.h"

class Image : public PNG
{
public:
    using PNG::PNG;
    Image (string path);
    void lighten(double amount=0.1);
    void saturate(double amounnt=0.1);
    void rotateColor( double angle);
};

#endif // IMAGE_H
