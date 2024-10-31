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
