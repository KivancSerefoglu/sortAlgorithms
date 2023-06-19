#include "AlgorithmSortHeap.h"

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortHeap::select() {
    int N = 0;
    cin >> N;
    BinaryHeap* binHeap = new BinaryHeap(k);
    for (int i = 0; i < k; ++i) {
        int tmp;
        cin >> tmp;
        binHeap->insert(tmp);
    }

    for (int i = 0; i < N - k; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp < binHeap->getMin()) {

        }
        else {
            binHeap->deleteMin();
            binHeap->insert(tmp);
        }

    }
    return binHeap->getMin();

}