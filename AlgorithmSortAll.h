#ifndef SORTALL
#define SORTALL
#include "SelectionAlgorithm.h"
#include <iostream>
#include <string>
#include <fstream>


class AlgorithmSortAll : public SelectionAlgorithm {
public:
    AlgorithmSortAll(int k);
    int select();
};

#endif