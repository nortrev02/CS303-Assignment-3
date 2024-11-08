#pragma once
#include <list>
#include <vector>
#include <iostream>
using namespace std;

template <typename item> class A3Queue {
private:
	list<item> internalQueue;
public:
	void push(item);
	void pop();
	item getFront();
	int size();
	bool empty();
	void move_to_rear();

};

int recursiveLinearSearch(vector<int>, int, int);

void linkedListInsertionSort(list<int> );