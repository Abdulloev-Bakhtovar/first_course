#pragma once
#include "Vector.h"
template <class T>
class Iterator
{
	int* elem;
	friend class Vector<T>;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator<T>& it) { elem = it.elem; }
	bool operator==(const Iterator<T>& it) { return elem == it.elem; }
	void operator--() { --elem; }
	T& operator*()const { return *elem; }
};

