#include <forward_list>
#include "A3Functions.h"
using namespace std;

template <typename item>
class A3Queue {
public:
	forward_list<item> internalQueue;
};