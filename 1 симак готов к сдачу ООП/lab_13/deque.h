#pragma once
#include <deque>
#include <iostream>
using namespace std;
typedef deque<double> deq;

deq make_deque(int size)
{
	deq d;
	for (int i = 0; i < size; i++)
	{
		d.push_back(rand() % 50);
	}
	return d;
}

void print_deque(deq d)
{
	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " " << " ";
	cout << endl;
}

//deq swap_deque(deq d,double searchNum, int newInd)
//{
//	int cur = 0, k = -1;
//	for (double n : d)
//	{
//		if (n == searchNum)
//		{
//			k = cur;
//			break;
//		}
//		cur++;
//	}
//	if (k == -1)
//		return d;
//	int OldInd = cur;
//	double temp = d[OldInd];
//	int size = d.size();
//	double* newArr = new double[size + 1];
//
//	for (int i = 0, j=0; i < size; j++,i++)
//	{
//		if (i == OldInd)
//		{
//			for (; i < size; i++,j++)
//			{
//				if (i == newInd)
//				{
//					newArr[j] = temp;
//					j++;
//					i++;
//
//					for (; i < size; j++, i++)
//					{
//						newArr[j] = d[i];
//					}
//				}
//				else
//				{
//					newArr[j] = d[i+1];
//				}
//			}
//		}
//		else
//		{
//			newArr[j] = d[i];
//		}
//	}
//
//	for (int n = 0; n < size; n++)
//	{
//		d[n] = newArr[n];
//	}
//	return d;
//}

deq swap_deque(deq d, double searchNum, int newInd)
{
	int size = d.size();
	double* newArr = new double[size + 1];
	int cur = 0, k = -1;
	for (double n : d)
	{
		if (n == searchNum)
		{
			k = cur;
			break;
		}
		cur++;
	}
	if (k == -1)
		return d;
	double temp = d[cur];
	int k2 = -1;
	for (int i = 0; i < size;i++)
	{
		if (i == cur)
		{
			k2 = i;
			break;
		}
		newArr[i] = d[i];
	}
	if (k > -1)
	{
		for (int j = k; j < size-1; j++)
		{
			newArr[j] = d[j + 1];
		}
	}
	int k3 = -1;
	for (int i = 0,j=0; i < size; j++,i++)
	{
		if (i == newInd)
		{
			d[i] = temp;
			k3 = i;
			break;
		}
		d[i] = newArr[j];
	}
	if (k3 > -1)
	{
		for (int j = k3+1,i=k3; j < size; i++,j++)
		{
			d[j] = newArr[i];
		}
	}
	return d;
}

deq del_val(deq d,double searchNum)
{
	int cur = 0, k = -1;
	for (double n : d)
	{
		if (n == searchNum)
		{
			k = cur;
			break;
		}
		cur++;
	}
	if (k == -1)
		return d;
	auto it = d.begin();
	d.erase(it + cur);
	return d;
}

deq searchMaxMin(deq d)
{
	double max = d[(d.size())-1], min = d[0];
	for (int i = 0; i < d.size(); i++)
	{
		if (max < d[i])
			max = d[i];
		if (min > d[i])
			min = d[i];
	}
	//cout << "max = " << max << " min = " << min << endl;
	double res = max - min;
	for (int i = 0; i < d.size(); i++)
	{
		d[i] -= res;
	}
	return d;
}



//deq swap_deque(deq d, int OldInd, int newInd)
//{
//	int size = d.size();
//	double temp = d[OldInd];
//	auto it1 = d.begin();
//	//it += OldInd;
//	d.erase(it1+OldInd);
//	//it += newInd;
//	//d.resize(5);
//	deq d1(size);
//	auto it = d1.begin();
//	//d.insert(it+newInd, temp);
//	double d2;
//	for (int i = 0; i < size; i++)
//	{
//		/*if (i == newInd)
//		{
//			d1[i] = temp;
//			d1.insert(it + i, temp);
//			for (int j = i+1; i < size; j++,i++)
//			{
//				d2 = d[i];
//				d1.insert(it + j, d2);
//			}
//		}*/
//		d1.insert(it + i, temp);
//		//d2 = d[i];
//		////d1.emplace(it+i,d2);
//		////d[i] = d2;
//		//d1[i] = d2;
//	}
//	return d1;
//}