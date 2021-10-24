#include "grayscale.h"

Grayscale::Grayscale(string filename):Image()
{
    readFromFile(filename);
    for(unsigned i=0;i< width();i++)
    {
        for(unsigned j=0;j<height();j++)
        {
            HSLAPixel &p  = getPixel(i,j);
            p.s =0;
        }
    }
}
