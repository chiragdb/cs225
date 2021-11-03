/* Your code here! */
#include "dsets.h"

void DisjointSets::addelements(int num) {
    for (int i = 0; i < num; i++) {
        vect.push_back(-1);
    }
}


int DisjointSets::find(int element) {
    int val = vect.at(element);
    if (val < 0) {
        return element;
    } else {
        vect.at(element) = find(vect.at(element));
    }
    return vect.at(element);
}

int DisjointSets::size(int element) {
    int val = find(element);
    int output = vect.at(val);
    return output * -1;
}

void DisjointSets::setunion(int first, int second) {
    int first_val = find(first);
    int second_val = find(second);

    if (first_val != second_val) {
        int size = vect.at(first_val) + vect.at(second_val);
        if (vect.at(first_val) > vect.at(second_val)) {
            vect.at(first_val) = second_val;
            vect.at(second_val) = size;
        } else {
            vect.at(second_val) = first_val;
            vect.at(first_val) = size;
        }
    }
}


