#pragma once
#include "Vector.h"
class Iterator
{
	friend class Vector;
	int* elem;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator==(const Iterator& it) { return elem == it.elem; }
	void operator--() { --elem; }
	int& operator*()const { return *elem; }
};