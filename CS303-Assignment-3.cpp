// CS303-Assignment-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "A3Functions.h"

template <typename item> void A3Queue<item>::push(item newItem) {
    internalQueue.push_back(newItem);
}

template <typename item> void A3Queue<item>::pop() {
    internalQueue.pop_front();
}

template <typename item> item A3Queue<item>::getFront() {
    return internalQueue.front();
}

template <typename item> int A3Queue<item>::size() {
    return internalQueue.size();
}

template <typename item> bool A3Queue<item>::empty() {
    return internalQueue.empty();
}

template <typename item> void A3Queue<item>::move_to_rear() {
    item temporary = internalQueue.front();
    internalQueue.pop_front();
    internalQueue.push_back(temporary);
}

int recursiveLinearSearch(vector<int> items, int target, int pos_first) { // code copied, still need to make return the last instance not first
    if (pos_first == items.size()) {
        return -1;
    }
    if (target == items[pos_first]) {
    return pos_first;
    }
    else {
        return recursiveLinearSearch(items, target, pos_first + 1);
    }
}

void linkedListInsertionSort(list<int> num) { // code copied, still needs converted to list data structure
    int i, j, key;
    bool insertionNeeded = false;
    for (j = 1; j < num.size(); j++) {
        key = num[j]; insertionNeeded = false; for (i = j - 1; i >= 0; i--) {
            if (key < num[i]) {
                num[i + 1] = num[i]; // larger values move right
                insertionNeeded = true;
            }
            else{
                break;
            }
            if (insertionNeeded) {
                num[i + 1] = key; //Put key into its proper location
            }
}


int main()
{
    A3Queue<int> theNumbers;
    theNumbers.push(9);
    cout << theNumbers.getFront() << endl;
    theNumbers.push(10000);
    theNumbers.pop();
    cout << theNumbers.getFront() << endl;
    while (true) {
        if (theNumbers.empty()) {
            cout << "Queue is Empty!" << endl;
            break;
        }
        else {
            cout << "Queue is not Empty! Emptying..." << endl;
            theNumbers.pop();
        }
    }
}
