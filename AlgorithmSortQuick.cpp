#include "AlgorithmSortQuick.h"
#include <algorithm>

AlgorithmSortQuick ::AlgorithmSortQuick(int k) : SelectionAlgorithm(k){
    this->k=k;
}

int AlgorithmSortQuick ::select() {
    int N = 0;
    cin>>N;

    int *numbers = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    int result = quickselect(numbers, 0, N-1, N-k+1);

    delete []numbers;
    return result;

}

int AlgorithmSortQuick ::quickselect(int *numbers, int left, int right, int k) {


    if ((right-left)<10) {
        InsertionSort(numbers, left, right);
        return numbers[left+k-1];
    } else {
        int pivot = median3(numbers, left, right);
        int i, j;
        i = left-1;
        j = right - 1;

        for (;;) {
            while (numbers[++i] < pivot) {}
            while (pivot < numbers[--j]) {}
            if (i < j) {
                swap(numbers[i], numbers[j]);
            } else {
                break;
            }
        }
        swap(numbers[i], numbers[right-1]);

        int pi = i;

        int S1 = pi - left + 1;

        if (k < S1) {
            return quickselect(numbers, left, pi-1, k);
        } else if (k == S1) {
            return numbers[pi];
        } else {
            return quickselect(numbers, pi + 1, right, k - S1);
        }
    }

}

int AlgorithmSortQuick ::median3(int* numbers, int left, int right) {

    int center;

         center = (left + right) / 2;


        if (numbers[center] < numbers[left]) {
            swap(numbers[left], numbers[center]);
        }
        if (numbers[right] < numbers[left]) {
            swap(numbers[right], numbers[left]);
        }
        if (numbers[right] < numbers[center]) {
        swap(numbers[right], numbers[center]);
        }

        swap(numbers[center], numbers[right - 1]);
        return numbers[right-1];

    }


void AlgorithmSortQuick::InsertionSort (int *arr, int low, int n){

    for(int i=low+1;i<n+1;i++){
        int val = arr[i] ;
        int j = i;
        while (j>low && arr[j-1]>val)
        {
            arr[j]= arr[j-1] ;
            j-= 1;
        }
        arr[j]= val;
    }

}



