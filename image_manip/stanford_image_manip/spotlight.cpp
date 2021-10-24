#include "spotlight.h"
#include "math.h"

Spotlight::Spotlight(string filename, int x, int y) : Image()
{
    readFromFile(filename);
    for(unsigned i=0; i<width(); i++  ){
        for(unsigned j=0; j<height(); j++){
            HSLAPixel &p = getPixel(i,j);
            auto dist = sqrt((i-x)*(i-x) + (j-y)*(j-y));
            double luminanceval = 1-dist*0.5/100 ;
            if (dist>160){
                luminanceval=0.2;
            }
            p.l=p.l*luminanceval;
        }
    }
}
