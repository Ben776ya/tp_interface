#ifndef GRAYSCALE_H
#define GRAYSCALE_H
#include"image.h"

class Grayscale : public Image

{
public:
    using Image ::Image;
   Grayscale (string path);
};

#endif // GRAYSCALE_H
