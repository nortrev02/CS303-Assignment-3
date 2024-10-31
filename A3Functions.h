#pragma once
#include <list>
#include <iostream>
using namespace std;

template <typename item> class A3Queue {
private:
	list<item> internalQueue;
public:
	item getFront();
	void push(item);

};