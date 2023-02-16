//#include "Vector.h"
//template<class T>
//Vector<T>::Vector(int size, T k)
//{
//	this->size = size;
//	date = new int[size+1];
//	for (int i = 0; i < size; i++)
//	{
//		date[i] = k;
//	}
//	beg.elem = &date[0];
//	end.elem = &date[size-1];
//}
//
//template<class T>
//Vector<T>::~Vector()
//{
//	delete[] date;
//	date = 0;
//}
//
//template<class T>
//Vector<T>::Vector(const Vector<T>& other)
//{
//	size = other.size;
//	if (date != 0)
//		delete[] date;
//	date = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		date[i] = other.date[i];
//	}
//	beg = other.beg;
//	end = other.end;
//}
//
//template<class T>
//int& Vector<T>::operator[](int index)
//{
//	if (index < size)
//		return date[index];
//}
//
//template<class T>
//Vector<T>& Vector<T>::operator+(const T k)
//{
//	for (int i = 0; i < size; i++)
//	{
//		date[i] += k;
//	}
//	return *this;
//}
//
//template<class T>
//Vector<T>& Vector<T>::operator+(const Vector<T>& other)
//{
//	if (this->size == other.size)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			this->date[i] += other.date[i];//a+=b;
//		}
//		return *this;
//	}
//}
//
//template<class T>
//Vector<T>& Vector<T>::operator=(const Vector<T>& other)
//{
//	if (&other == this)
//		return *this;
//	size = other.size;
//	if (date != 0)
//		delete[] date;
//	date = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		date[i] = other.date[i];
//	}
//	beg = other.beg;
//	end = other.end;
//	return *this;
//}
//
//template<class T>
//istream& operator>>(istream& in, Vector<T>& vector)
//{
//	for (int i = 0; i < vector.size; i++)
//	{
//		in >> vector.date[i];
//	}
//	return in;
//}
//
//template<class T>
//ostream& operator<<(ostream& out, Vector<T>& vector)
//{
//	for (int i = 0; i < vector.size; i++)
//	{
//		out << vector.date[i] << " " << " ";
//	}
//	cout << endl;
//	return out;
//}
//


//template<class T>
//inline Vector<T>::Vector(int size, T k)
//{
//	this->size = size;
//	date = new T[size];
//	for (int i = 0; i < size; i++)
//	{
//		date[i] = k;
//	}
//}
//
//template<class T>
//inline Vector<T>::Vector(const Vector<T>& other)
//{
//	size = other.size;
//	date = new T[size];
//	for (int i = 0; i < size; i++)
//	{
//		date[i] = other.date[i];
//	}
//}
//
//template<class T>
//inline Vector<T>::~Vector()
//{
//	delete[] date;
//	date = 0;
//}
//
//template<class T>
//inline Vector<T>/*למזוע בוח רבכ*/& Vector<T>::operator=(const Vector<T>& other)
//{
//	if (this == &other)
//		return *this;
//	size = other.size;
//	if (date != 0)
//		delete[] date;
//	date = new T[size];
//	for (int i = 0; i < size; i++)
//	{
//		date[i] = other.date[i];
//	}
//	return *this;
//}
//
//template<class T>
//inline T& Vector<T>::operator[](int index)
//{
//	if (index == size)
//		return date[index];
//	else
//		cout << "\nError: index > size";
//}
//
//template<class T>
//inline Vector<T> Vector<T>::operator+(const T k)
//{
//	Vector<T> temp(size, k);
//	for (int i = 0; i < size; i++)
//	{
//		temp.date[i] = date[i] + k;
//	}
//	return temp;
//}
//
//template<class T>
//inline Vector<T> Vector<T>::operator+(const Vector<T>& other)
//{
//	//Vector<T> temp(size, T k);
//	for (int i = 0; i < size; i++)
//	{
//		/*temp.date[i] =*/ this->date[i] += other.date[i];
//	}
//	return *this;
//}
//
//template<class T1>
//inline istream& operator>>(istream& in, Vector<T1>& vector)
//{
//	for (int i = 0; i < vector.size; i++)
//	{
//		in >> vector.date[i];
//	}
//	return in;
//}
//
//template<class T1>
//ostream& operator<<(ostream& out, const Vector<T1>& vector)
//{
//	for (int i = 0; i < vector.size; i++)
//	{
//		out << vector.date[i] << " ";
//	}
//	return out;
//}


//template<class T1>
//inline ostream& operator<<(ostream& out, const Vector<T1>& vector)
//{
//	for (int i = 0; i < vector.size; i++)
//	{
//		out << vector.date[i] << " ";
//	}
//	return out;
//}
