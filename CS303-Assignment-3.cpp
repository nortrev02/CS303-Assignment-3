// CS303-Assignment-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "A3Functions.h"

template <typename item> item A3Queue<item>::getFront() {
    return internalQueue.front();
}
template <typename item> void A3Queue<item>::push(item newItem) {
    internalQueue.push_back(newItem);
}


int main()
{
    cout << "Hello World!\n";
    A3Queue<int> theNumbers;
    theNumbers.push(9);
    cout << theNumbers.getFront();
}
