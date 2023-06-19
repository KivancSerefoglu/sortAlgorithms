#ifndef SORTK
#define SORTK

#include "SelectionAlgorithm.h"
#include <iostream>
#include <string>
#include <fstream>

class AlgorithmSortK : public SelectionAlgorithm {
public:
    AlgorithmSortK(int k);
    int select();
};



#endif