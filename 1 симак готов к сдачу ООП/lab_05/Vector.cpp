#include "Vector.h"

Vector::Vector()
{
	begin = nullptr;
	Size = 0;
	current = 0;
}

Vector::Vector(int length)
{
	begin = new Object * [length];
	current = 0;
	Size = length;
}

void Vector::Add(Object* obj)
{
	if (current < Size)
	{
		begin[current] = obj;
		current++;
	}
}

ostream& operator<<(ostream& out, const Vector& vector)
{
	if (vector.Size == 0)
		out << "Empty!" << endl;
	Object** obj = vector.begin;
	for (int i = 0; i < vector.current; i++)
	{
		(*obj)->Show();
		obj++;
	}
	return out;
}

Vector::~Vector()
{
	if (begin != nullptr)
		delete[] begin;
	begin = nullptr;
}
