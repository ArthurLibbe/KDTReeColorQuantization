#ifndef _COLOR_H

#include "ColorDimension.h"
#include <vector>

using namespace std;

struct Color
{
    public:
        Color(unsigned char r, unsigned char g,unsigned char b);
        unsigned char red;
        unsigned char green;
        unsigned char blue;

        static Color getAverage(vector<Color> &c);
        unsigned char operator[](COLORDIM dim) const;
};



#endif