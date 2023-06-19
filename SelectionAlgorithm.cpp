#include "SelectionAlgorithm.h"

SelectionAlgorithm::SelectionAlgorithm(int k) {
    this->k=k;
}

int SelectionAlgorithm::select() {
    return 0;
}

void SelectionAlgorithm::CreateArray(int n, int *pArray) {
    for (int i = 0; i < n ; ++i) {
        cin >> pArray[i];
    }
}

void SelectionAlgorithm::Sort(int n, int *pNumbers) {
    for (int i = 1; i < n; ++i) {
        int temp = pNumbers[i];
        int j= i-1;
        while (j>=0 && temp > pNumbers[j]){
            pNumbers[j+1] = pNumbers[j];
            j= j-1;
        }
        pNumbers[j+1]=temp;
    }
}

void SelectionAlgorithm ::Delete(int *pNumbers) {
    delete [] pNumbers;
}