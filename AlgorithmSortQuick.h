//
// Created by kivan on 10.05.2022.
//

#ifndef ALGORITHMSORTK_H_ALGORITHMSORTQUICK_H
#define ALGORITHMSORTK_H_ALGORITHMSORTQUICK_H

#include "SelectionAlgorithm.h"
#include <iostream>
#include <string>
#include <fstream>

class AlgorithmSortQuick : public SelectionAlgorithm{
public:
    int select();
    int quickselect(int *numbers, int left, int right, int k);
    AlgorithmSortQuick(int k);

private:
    int median3(int *numbers, int left, int right);
    void InsertionSort(int *numbers, int low, int high);

};

#endif //ALGORITHMSORTK_H_ALGORITHMSORTQUICK_H
