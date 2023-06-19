#include "TestBed.h"
#include <ctime>
#include <iostream>
using namespace std;

TestBed::TestBed(int type, int k) {
    setAlgorithm(type, k);
    execute();
}
TestBed::~TestBed() {
    delete algorithm;
}

void TestBed::execute() {

    // Time stamp before the computations
    clock_t start = clock();
    /* Computations to be measured */
    // Time stamp after the computations
    algorithm->select();
    clock_t end = clock();
    double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "Duration(sec): " << cpu_time << endl;


}

void TestBed::setAlgorithm(int type, int k) {
    if (type == 1) {
        algorithm = new AlgorithmSortAll(k);

    }
    else if (type == 2) {
        algorithm = new AlgorithmSortK(k);

    }
    else if (type == 3) {
        algorithm = new AlgorithmSortHeap(k);
    }
    else if (type == 4) {
        algorithm = new AlgorithmSortQuick(k);
    }
    cout << "Result: " << algorithm->select() << endl;
}
