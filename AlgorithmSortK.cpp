#include "AlgorithmSortK.h"

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortK::select() {
    int N = 0;
    cin >> N;
    int* pNumbers = new int[k];
    CreateArray(k, pNumbers);
    Sort(k, pNumbers);

    for (int i = 0; i < N - k; ++i) {
        int next = 0;
        cin >> next;

        if (next > pNumbers[k - 1]) {
            pNumbers[k - 1] = next;
            Sort(k, pNumbers);
        }
    }
    return pNumbers[k - 1];
}
