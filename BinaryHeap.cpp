//============================================================================
// Name        : BinaryHeap.cpp
// Author      : Hasan Sozer
// Version     : 1.3 (2021)
// Copyright   : (c) 2013 Ozyegin University
// Description : Includes the (incomplete) implementation file of the
//               BinaryHeap class that will be used as part of the program
//               to be submitted as Homework 3, which is assigned in the
//               context of the course CS201, Data Structures and Algorithms.
//
//               THE IMPLEMENTATION MUST BE COMPLETED TO MAKE ALL THE TESTS
//               IN THE MAIN METHOD PASS.
//
//               After completing the heap implementation, "BinaryHeap.h" and
//               "BinaryHeap.cpp" files will be used for extending homework 1,
//               and the extended program will be submitted as Homework 3.
//============================================================================

#include "BinaryHeap.h"

BinaryHeap::BinaryHeap(int capacity) {
    this->capacity = capacity;

    // The element at index 0 is not used!
    // The root element will be placed at index 1
    heap = new int[capacity + 1];
    size = 0;
}

BinaryHeap::~BinaryHeap() {
    delete[] heap;
}

void BinaryHeap::insert(int element) {

    // TO BE COMPLETED


    // The capacity of the heap is assumed to be fixed.
    // Insert the element if size < capacity
    // Do nothing otherwise.

    if (size < capacity) {
        int hole = ++size;
        heap[size] = element;

        for (int i = size; i > 1 && element < heap[i / 2]; i /= 2) {
            swap(i, i / 2);
        }
    }
    else {
        return;
    }


    // After the new element is inserted, perform a percolate up operation here.
    // You can add a percolateUp method to the class,
    // or just implement the operations within this insert method.
}

void BinaryHeap::deleteMin() {

    // TO BE COMPLETED

    // If the size is less than 1, do nothing and stop
    // Otherwise, replace the root of the heap with the last element on the last level
    // ...

    if (size < 1) {
        return;
    }
    else {
        heap[1] = heap[size];
        size--;
    }

    // Then, call the percolateDown function by providing the index of the root node, i.e., 1
    percolateDown(1);
}

int BinaryHeap::getMin() {

    // TO BE COMPLETED

    // If the size is less than 1, return -1
    // Otherwise, return the value of the root node
    if (size < 1) {
        return -1;
    }
    else {
        return heap[1];
    }

}

void BinaryHeap::percolateDown(int hole) {

    // TO BE COMPLETED

    // Compare the node with its children; if they are in the correct order, stop
    // Otherwise, swap the element with the smallest child
    // Repeat the operation for the swapped child node

    int minIn = hole;
    int left = hole * 2;
    int right = hole * 2 + 1;


    if (left <= size && heap[left] < heap[minIn]) {
        minIn = left;
    }
    if (right <= size && heap[right] < heap[minIn]) {
        minIn = right;
    }

    if (minIn != hole) {
        swap(hole, minIn);
        percolateDown(minIn);
    }


    // Make sure that you take care of all the possible cases:
    // 1. The node might not have a child at all
    // 2. The node might have only a left child
    // 2.1. The left child might be smaller
    // 3. The node might have both left and right children
    // 3.1 Only the left child might be smaller
    // 3.2 Only the right child might be smaller
    // 3.3 Both left and right children might be smaller, in which case the element should be swapped with the smallest of the two
}


void BinaryHeap::swap(int i, int j) {
    int t = heap[i];
    heap[i] = heap[j];
    heap[j] = t;
}
