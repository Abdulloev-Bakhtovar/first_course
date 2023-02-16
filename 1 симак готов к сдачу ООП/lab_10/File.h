#pragma once
#include "head.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int make_file(const char* f_name)
{
	fstream stream(f_name, ios::trunc | ios::out );
	if (!stream)
		return -1;
	int size1;
	Time t;
	cout << "Size: "; cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> t;
		stream << t;
	}
	stream.close();
	return size1;
}

int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);
	if (!stream)
		return -1;
	Time t; int i = 0;
	while (stream >> t)
	{
		cout << t << endl;
		i++;
	}
	stream.close();
	return i;
}

int del_file(const char* f_name, int k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)
		return -1;
	Time t; int i = 0;
	while (stream >> t)
	{
		if (stream.eof()) break;
		i++;
		if (i != k)
			temp << t;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}

int minus_file(const char* f_name, int k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)
		return -1;
	Time t; int i = 0;
	while (stream >> t)
	{
		if (stream.eof()) break;
		i++;
		if (i == k)
		{
			if (t.getMin() > 1)
			{
				//Time t1;
				int tmp = ((t.getMin() * 60 + t.getSec()) - 90/*1:30*/);
				t.setMin(tmp / 60);
				t.setSec(tmp % 60);
				temp << t;
				continue;
			}
		}
		temp << t;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}

int insert_file(const char* f_name, int k, int index)
{
	fstream temp("temp.txt", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)
		return -1;
	Time t,t2; int i = 0;
	while (stream >> t)
	{
		if (stream.eof()) break;
		i++;
		if (index == i)
		{
			temp << t;
			for (int j = 0; j < k; j++)
			{
				cin >> t2;
				temp << t2;
				i++;
			}
			continue;
		}
		temp << t;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp.txt", f_name);
	return i;
}