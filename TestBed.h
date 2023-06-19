#ifndef TESTBED
#define TESTBED

#include "SelectionAlgorithm.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


class TestBed{
private:
    SelectionAlgorithm *algorithm;
public:
    void execute();
    void setAlgorithm (int type, int k);
    TestBed(int type, int k);
    ~TestBed();
};


#endif