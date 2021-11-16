/* Your code here! */
#pragma once
#include <vector>

class DisjointSets {
    public:
        void addelements(int num);
        int find(int element);
        void setunion(int first, int second);
        int size(int element);
    private:
        std::vector<int> vect;
};