#include "AlgorithmSortAll.h"



AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k) {
    this->k = k;

}

int AlgorithmSortAll::select() {
    int N = 0;
    cin >> N;
    int* pNumbers = new int[N];
    CreateArray(N, pNumbers);
    Sort(N, pNumbers);

    return pNumbers[k - 1];


}
