#ifndef _KDTree_H_
#define _KDTree_H_

#include "KDNode.h"
#include <vector>

using namespace std;

class KDTree{
    public:
        //attributes and constructors
        KDNode* root;
        KDTree(int depth) {};
        //setters and getters
        void setMaxDepth(int max);
        //functions
        void build(vector<Color> &colors, KDNode* node, int currentDepth);
        Color query(const Color &c, const KDNode* node);

    private:
        int maxdepth;
};


#endif