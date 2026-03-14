#ifndef _KDNODE_H
#define _KDNODE_H

#include "Color.h"
#include "ColorDimension.h"

struct KDNode
{
    KDNode* left;
    KDNode* right;
    Color value;
    COLORDIM split_dimension;
};



#endif
