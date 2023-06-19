#ifndef SELECT
#define SELECT
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class SelectionAlgorithm {
protected:
    int k;
public:
    virtual int select();
    SelectionAlgorithm(int k);
    void CreateArray (int n, int *array);
    void Sort(int n, int *array);
    void Delete(int *array);
};

#endif