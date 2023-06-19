#ifndef SORTH
#define SORTH

#include "SelectionAlgorithm.h"
#include "BinaryHeap.h"
#include <iostream>
#include <string>
#include <fstream>

class AlgorithmSortHeap : public SelectionAlgorithm{
public:
    AlgorithmSortHeap(int k);
    int select ();
};

#endif