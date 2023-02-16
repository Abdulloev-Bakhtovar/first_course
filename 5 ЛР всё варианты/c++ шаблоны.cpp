//string str; 
	//char ch[15];
	//cout << "Enter a string: "; 
	//getline(cin, str);
	//cin.get(ch, 15);
	//cout << "You entered: " << /*str*/ch << endl; 
	//return 0;

Ёфтани аввалин элементи додашуда ва удалит кардани он аз массив

/*#include <iostream>

using namespace std;

void fillArr(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void printArr(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void pop_back(int*& arr, int& size, int const delVal)
{
	int* newArr = new int[size]
}

int main()
{
	int size = 10;
	int* arr = new int[size];

	cout << "first arr =\t";
	fillArr(arr, size);
	printArr(arr, size);
	
	delete[] arr;
}*/

/*#include <iostream>
#include <ctime>

using namespace std;

void fillArr(int* const arr, int const size)
{
	for (int i = 0; i < size;)
	{
		bool resBool = true;
		int searchVal = rand() % 50;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == searchVal) 
				resBool = false;
		}
		if (resBool)
		{
			arr[i] = searchVal;
			i++;
		}
	}
}

void printArr(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void pop_back(int*& arr, int& size, int const delVal)
{
	int* newArr = new int[size-1];	
	int k = -1;

	for (int i = 0; i < size; i++)
	{
		
		if (arr[i] == delVal)
		{
			k = i;
			break;
		}
		else
			newArr[i] = arr[i];
	}
	if (k > -1)
	{
		size--;
		for (int i = k; i < size; i++)
		{
			newArr[i] = arr[i+1];
		}
	}
	delete[] arr;
	arr = newArr;
}

void push_back(int*& arr, int& size, int const newVal)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = newVal;
	size++;
	delete[]arr;
	arr = newArr;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int size = 10;
	int* arr = new int[size];

	fillArr(arr, size);
	printArr(arr, size);

	bool resFirstQuestionBool = true;
	while (resFirstQuestionBool)
	{
		cout << "\nВведите элемент который хотите удалить = ";
		int pop = 0;
		cin >> pop;
		pop_back(arr, size, pop);
		printArr(arr, size);
		
		bool resFirstBool = true;
		while (resFirstBool)
		{
			cout << "\nХотите продолжпть удаление элементов? (y-ДА / n-НЕТ): ";
			string resFirstQuestion;
			cin >> resFirstQuestion;
			if (resFirstQuestion == "y")
			{
				resFirstQuestionBool = true;
				resFirstBool = false;
			}
			else if (resFirstQuestion == "n")
			{
				resFirstQuestionBool = false;
				resFirstBool = false;
			}
			else
			{
				cout << "\nТакого ответа нет! Пожалуйста внимательно читайте нижные условия:";
				resFirstBool = true;
			}
		}

	}

	bool resSecondQuestionBool = true;
	while (resSecondQuestionBool)
	{
		cout << "\nВведите элемент который хотите добавить = ";
		int push = 0;
		cin >> push;
		push_back(arr, size, push);
		printArr(arr, size);
		cout << endl;

		bool resSecondBool = true;
		while (resSecondBool)
		{
			cout << "\nХотите продолжпть удаление элементов? (y-ДА / n-НЕТ): ";
			char resSecondQuestion;
			cin >> resSecondQuestion;
			if (resSecondQuestion == 'y')
			{
				resSecondQuestionBool = true;
				resSecondBool = false;
			}
			else if (resSecondQuestion == 'n')
			{
				resSecondQuestionBool = false;
				resSecondBool = false;
			}
			else
			{
				cout << "\nТакого ответа нет! пожалуйста внимательно читайте нижные условия:";
				resSecondBool = true;
			}
		}
	}
	
}*/

Удалить кардани элемент дар массивеки размераш констант аст
/*
#include <iostream>
#include <ctime>

using namespace std;

void fillArr(int arr[], int size)
{
	int newRandVal;
	bool resBool = true;
	for (int i = 0; i < size;)
	{
		newRandVal = rand() % 50;
		for (int j = 0; j < i; j++)
		{
			if(arr[j] == newRandVal)
			{
				resBool = false;
			}
		}
		if (resBool)
		{
			arr[i] = newRandVal;
			i++;
		}
	}
}

void printArr(int const arr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void pop_back(int arr[], const int const size, int const delVal)
{
	int i = 0;
	while (i != delVal)
		i++;
	for (int j = i; j < size; j++)
	{
		arr[j - 1] = arr[j];
	}
}

int main()
{
	srand(time(NULL));
	int const size = 5;
	int arr[size];

	fillArr(arr, size);
	printArr(arr, size);
	int k;
	cin >> k;
	pop_back(arr, size, k);
	printArr(arr, size);
}
*/


МЕТАВОНАД РАЗМЕРИ МАССИВРО ИВАЗ КАРДА БА ОН ЭЛЕМЕНТИ НАВ ДОБАВИТ КУНАД ВА Ё УДАЛИТ КУНАД
/*
#include <iostream>
#include <ctime>

using namespace std;

void fillArr(int arr[], int size)
{
	int newRandVal;
	bool resBool = true;
	for (int i = 0; i < size;)
	{
		newRandVal = rand() % 50;
		for (int j = 0; j < i; j++)
		{
			if(arr[j] == newRandVal)
			{
				resBool = false;
			}
		}
		if (resBool)
		{
			arr[i] = newRandVal;
			i++;
		}
	}
}

void printArr(int const arr[], int const size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
void min_max_Arr(int const arr[], int const size)
{
	int min = arr[0], max = arr[size];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << "\nmin = " << min << " max = " << max << endl;
}

void push_back_before(int *&arr, int& size, int const newVal)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = newVal;
	size++;
	delete[] arr;
	arr = newArr;
}

void push_back_after(int*& arr, int& size, int const newVal)
{
	int* newArr = new int[size + 1];
	newArr[0] = newVal;
	for (int i = 0; i < size; i++)
	{
		newArr[i+1] = arr[i];
	}
	size++;
	delete[] arr;
	arr = newArr;
}

void push_back_center(int*& arr, int& size, int const newIndex, int const newVal)
{
	int startArr = 0, finishArr = size-1;
	bool resBool = true;
	while (resBool)
	{
		if (newIndex >= 0 && newIndex <= size)
		{
			int* newArr = new int[size + 1];
			int k = -1;
			for (int i = 0; i < size; i++)
			{
				if (i == newIndex)
				{
					newArr[i] = newVal;
					k = i;
					break;
				}
				newArr[i] = arr[i];
			}
			if (k > -1)
			{
				for (int j = k; j < size; j++)
				{
					newArr[j + 1] = arr[j];
				}
			}
			size++;
			delete[] arr;
			arr = newArr;
			resBool = false;
		}
		else
		{
			cout << "\nИндекс выходит из область массива. Область массив(" << startArr <<";" << finishArr << ")\n";
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int size = 5;
	int* arr = new int[size];
	cout << "arr1 = \t";
	fillArr(arr, size);
	printArr(arr, size);

	//push_back_before
	bool resFirstQuestionBool = true;
	while (resFirstQuestionBool)
	{
		cout << "\nВведите элемент который хотите добавить в самом конце массива = ";
		int popB = 0;
		cin >> popB;
		push_back_before(arr, size, popB);
		cout << "\narr2 = \t";
		printArr(arr, size);

		bool resFirstBool = true;
		while (resFirstBool)
		{
			cout << "\nХотите продолжать добавить элементов? (y-ДА / n-НЕТ): ";
			string resFirstQuestion;
			cin >> resFirstQuestion;
			if (resFirstQuestion == "y")
			{
				resFirstQuestionBool = true;
				resFirstBool = false;
			}
			else if (resFirstQuestion == "n")
			{
				resFirstQuestionBool = false;
				resFirstBool = false;
			}
			else
			{
				cout << "\nТакого ответа нет! Пожалуйста внимательно читайте нижные условия:";
				resFirstBool = true;
			}
		}

	}

	//push_back_center
	bool resSecondQuestionBool = true;
	while (resSecondQuestionBool)
	{
		cout << "\nВведите индекс который хотите добавить в нём элемен = ";
		int pushIndex = 0;
		cin >> pushIndex;
		cout << "\nВведите элемент который хотите добавить указанный индекс = ";
		int pushС = 0;
		cin >> pushС;
		push_back_center(arr, size, pushIndex, pushС);
		cout << "\narr3 = \t";
		printArr(arr, size);
		cout << endl;

		bool resSecondBool = true;
		while (resSecondBool)
		{
			cout << "\nХотите продолжать добавить элементов? (y-ДА / n-НЕТ): ";
			char resSecondQuestion;
			cin >> resSecondQuestion;
			if (resSecondQuestion == 'y')
			{
				resSecondQuestionBool = true;
				resSecondBool = false;
			}
			else if (resSecondQuestion == 'n')
			{
				resSecondQuestionBool = false;
				resSecondBool = false;
			}
			else
			{
				cout << "\nТакого ответа нет! пожалуйста внимательно читайте нижные условия:";
				resSecondBool = true;
			}
		}
	}

	//push_back_after
	bool resSeardQuestionBool = true;
	while (resSeardQuestionBool)
	{
		cout << "\nВведите элемент который хотите добавить в начале = ";
		int pushA = 0;
		cin >> pushA;
		push_back_after(arr, size, pushA);
		cout << "\narr4 = \t";
		printArr(arr, size);
		cout << endl;

		bool resSeardBool = true;
		while (resSeardBool)
		{
			cout << "\nХотите продолжать добавить элементов? (y-ДА / n-НЕТ): ";
			char resSeardQuestion;
			cin >> resSeardQuestion;
			if (resSeardQuestion == 'y')
			{
				resSeardQuestionBool = true;
				resSeardBool = false;
			}
			else if (resSeardQuestion == 'n')
			{
				resSeardQuestionBool = false;
				resSeardBool = false;
			}
			else
			{
				cout << "\nТакого ответа нет! пожалуйста внимательно читайте нижные условия:";
				resSeardBool = true;
			}
		}
	}

	delete[] arr;
}
*/

Хамааш почти

//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void fillArr(int arr[], int size)
//{
//	/*int newRandVal;
//	bool resBool = true;*/
//	for (int i = 0; i < size;i++)
//	{
//		arr[i] = rand() % 10;
//		/*for (int j = 0; j < i; j++)
//		{
//			if(arr[j] == newRandVal)
//			{
//				resBool = false;
//			}
//		}
//		if (resBool)
//		{
//			arr[i] = newRandVal;
//			i++;
//		}*/
//	}
//}
//
//void printArr(int const arr[], int const size)
//{
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//}
//void min_max_Arr(int const arr[], int const size)
//{
//	int min = arr[0], max = arr[size];
//	for (int i = 0; i < size; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//		if (max < arr[i])
//			max = arr[i];
//	}
//	cout << "\nmin = " << min << " max = " << max << endl;
//}
//
//void push_back_before(int *&arr, int& size, int const newVal)
//{
//	int* newArr = new int[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	newArr[size] = newVal;
//	size++;
//	delete[] arr;
//	arr = newArr;
//}
//
//void push_back_after(int*& arr, int& size, int const newVal)
//{
//	int* newArr = new int[size + 1];
//	newArr[0] = newVal;
//	for (int i = 0; i < size; i++)
//	{
//		newArr[i+1] = arr[i];
//	}
//	size++;
//	delete[] arr;
//	arr = newArr;
//}
//
//void push_back_center(int*& arr, int& size, int const newIndex, int const newVal)
//{
//	int startArr = 0, finishArr = size-1;
//	bool resBool = true;
//	while (resBool)
//	{
//		if (newIndex >= 0 && newIndex <= size)
//		{
//			int* newArr = new int[size + 1];
//			int k = -1;
//			for (int i = 0; i < size; i++)
//			{
//				if (i == newIndex)
//				{
//					newArr[i] = newVal;
//					k = i;
//					break;
//				}
//				newArr[i] = arr[i];
//			}
//			if (k > -1)
//			{
//				for (int j = k; j < size; j++)
//				{
//					newArr[j + 1] = arr[j];
//				}
//			}
//			size++;
//			delete[] arr;
//			arr = newArr;
//			resBool = false;
//		}
//		else
//		{
//			cout << "\nИндекс выходит из область массива. Область массив(" << startArr <<";" << finishArr << ")\n";
//			break;
//		}
//	}
//}
//
//void pop_back(int*& arr, int& size, int searchVal)
//{
//	int resSearchVal = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == searchVal)
//			resSearchVal += 1;
//	}
//
//	if (resSearchVal >= 1)
//	{
//		int k = -1;
//		int* newArr = new int[size - 1];
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i] == searchVal)
//			{
//				k = i;
//				break;
//			}
//			newArr[i] = arr[i];
//		}
//		if (k > -1)
//		{
//			for (int j = k; j < size; j++)
//			{
//				newArr[j] = arr[j + 1];
//			}
//		}
//		size--;
//		delete[] arr;
//		arr = newArr;
//	}
//	else
//	{
//		cout << "Такого элемента нет в массиве!\n";
//		exit;
//	}
//}
//
//
//void pop_back_oll(int*& arr, int& size, const int delVal)
//{
//	int howMany = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == delVal)
//			howMany++;
//	}
//	if (howMany == 0)
//		return;
//	int* newArr = new int[size - howMany];
//	for (int k = 0, j = 0; k < size; k++)
//	{
//		if (arr[k] != delVal)
//		{
//			newArr[j] = arr[k];
//			j++;
//		}
//	}
//	cout << endl << howMany << endl;
//	size -= howMany;
//	delete[] arr;
//	arr = newArr;
//}
//
//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "ru");
//	int size = 10;
//	int* arr = new int[size];
//	//cout << "arr1 = \t";
//	fillArr(arr, size);
//	//printArr(arr, size);
//	
//
//	int x = 0;
//	cout << "Введите x = ";
//	cin >> x;
//	double res = (double)(x + 1) / (x + 2);
//	cout << res;
//
//	delete[] arr;
//}*/

--------------------------
Сохтани класси string OOP
--------------------------
/*
#include <iostream>
#include <string>

using namespace std;

class myString
{
public:
	myString()
	{
		str = nullptr;
	}

	myString(const char *str)
	{
		//cout << "Вызвано конструктор " << this << endl;
		int length = strlen(str);
		this->str = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	}
	myString& operator = (const myString& other)
	{
		//cout << "Вызвано оператор присваевание (=) " << this << endl;
		if (this->str != nullptr)
			delete[] this->str;
		int length = strlen(other.str);
		this->str = new char[length + 1];
		for (int j = 0; j < length; j++)
		{
			this->str[j] = other.str[j];
		}
		str[length] = '\0';
		return *this;
	}
	//myString(const myString& other)
	//{
	//	//cout << "Вызвано конструктор копирование " << this << endl;
	//	if (this->str != nullptr)
	//		delete[] this->str;
	//	int length = strlen(other.str);
	//	this->str = new char[length + 1];
	//	for (int j = 0; j < length; j++)
	//	{
	//		this->str[j] = other.str[j];
	//	}
	//	str[length] = '\0';
	//}
	void print()
	{
		cout << str << endl;
	}
	~myString()
	{
		//cout << "Вызвано деструктор " << this << endl;
		delete[] this->str;
		
	}
	myString operator + (const myString& other)
	{
		//cout << "Вызвано оператор соединение (+) " << this << endl;
		myString newStr;
		int thisLength = strlen(this->str);
		int otherLength = strlen(other.str);
		newStr.str = new char[thisLength + otherLength + 1];
		int k = 0;
		for (; k < thisLength; k++)
		{
			newStr.str[k] = this->str[k];
		}
		for (int g = 0; g < otherLength; ++g,++k)
		{
			newStr.str[k] = other.str[g];
		}
		newStr.str[(thisLength + otherLength)] = '\0';

		return newStr.str;////ест ещё вариант: return newStr
	}
private:
	char* str;
};



int main()
{
	setlocale(LC_ALL, "ru");
	myString str1("PRIVET");
	//str1.print();
	myString str2("leningrad");
	//str2.print();
	//str1 = str2;
	//str1.print();
	myString str4("How I your");
	myString str3 = str1 + " " + str2 + " " + str1 + " " + str2 + " " + str4;
	str3.print();

	return 0;
}
*/

//#include <iostream>
//
//using namespace std;
//
//class point
//{
//private:
//	int x = 0;
//	int y = 0;
//	int size = 0;
//	int* arr = nullptr;
//public:
//	/*point()
//	{
//		x = 0;
//		y = 0;
//		arr = nullptr;
//		size = 0;
//	}*/
//	point(int x, int y)
//	{
//		cout << "Конструктор " << this << endl;
//		this->x = x;
//		this->y = y;
//	}
//	point(int size)
//	{
//		cout << "Конструктор " << this << endl;
//		this->size = size;
//		this->arr = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = i;
//		}
//	}
//	/*point(const point& other)
//	{
//		cout << "Конструктор копирование " << this << endl;
//
//		this->x = other.x;
//		this->y = other.y;
//	}*/
//	/*point operator =(const point& other)
//	{
//		cout << "Конструктор присвоивание " << this << endl;
//		this->x = other.x;
//		this->y = other.y;
//		return *this;
//	}*/
//	~point()
//	{
//		cout << "Деструктор " << this << endl;
//		delete[] this->arr;
//	}
//	point(const point& other)
//	{
//		cout << "Конструктор копирование " << this << endl;
//		this->x = other.x;
//		this->y = other.y;
//
//		this->size = other.size;
//		this->arr = new int[other.size];
//		for (int k = 0; k < this->size; k++)
//		{
//			this->arr[k] = other.arr[k]+1;
//		}
//	}
//	void print()
//	{
//		cout << "x = " << x << " y = " << y << endl;
//	}
//	point& operator = (const point& other)
//	{
//		cout << "Конструктор присвоивание " << this << endl;
//		this->size = other.size;
//		if (this->arr != nullptr)
//		{
//			cout << "Массив не был пустой! \n";
//			delete[] this->arr;
//		}
//		this->arr = new int[this->size];
//		for (int l = 0; l < this->size; l++)
//		{
//			this->arr[l] = other.arr[l];
//		}
//		return *this;
//	}
//	void printArr()
//	{
//		cout << "arr = [ ";
//		for (int j = 0;  j < this->size;  j++)
//		{
//			cout << arr[j] << " ";
//		}
//		cout << "]\n";
//	}
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	point a(5,6);
//	a.print();
//	point b(a);
//	b.print();
//	point c(10);
//	c.printArr();
//	point d(c);
//	d.printArr();
//	point i(5);
//	i.printArr();
//	point g(15);
//	g.printArr();
//	g = d = i;
//	d.printArr();
//	g.printArr();
//}

/*
#include <iostream>

using namespace std;

class point
{
private:
	int x;
	int y;
public:
	point()
	{
		x = 0;
		y = 0;
	}
	bool operator != (const point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	bool operator == (const point& other)
	{
		return this->x == other.x && this->y == other.y;
	}
	void print()
	{
		cout << "x = " << x << " y = " << y << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	point a(7,9);
	point b(17,9);
	a.print();
	b.print();
	//point c;
	bool c = a == b;
	cout << c << endl;
	bool d = a != b;
	cout << d << endl;
}
*/

/*#include <iostream>

using namespace std;

class myString
{
private:
	char* str ;
public:
	myString()
	{
		str = nullptr;

	}
	myString(const char* str)
	{
		int length = strlen(str);
		this->str = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	}
	~myString()
	{
		cout << " dest " << this << endl;
		delete[] this->str;
	}
	void print()
	{
		cout << this->str << endl;
	}
	myString operator+(const myString& other)
	{
		myString newStr;
		int thisLength = strlen(this->str);
		int otherLength = strlen(other.str);
		newStr.str = new char[thisLength + otherLength + 1];
		int i = 0;
		for (; i < thisLength; i++)
		{
			newStr.str[i] = this->str[i];
		}
		for (int j = 0; j < otherLength; j++,i++)
		{
			newStr.str[i] = other.str[j];
		}
		newStr.str[thisLength + otherLength] = '\0';

		return newStr.str;
	}
	void operator = (const myString& other)
	{
		if (this->str != nullptr)
			delete[] this->str;
		int length = strlen(other.str);
		this->str = new char[length+1];
		for (int k = 0; k < length; k++)
		{
			this->str[k] = other.str[k];
		}
		this->str[length] = '\0';
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	myString str1("Курбан");
	str1.print();
	myString str2("Привет");
	str2.print();
	str1 = str2;
	str1.print();
	str1 = "Мага";
	myString str3 = str1 + " " + str2 + " Как ваши дела вы от куда суда приехали и почему именно суда! ";
	str3.print();
}*/

/*
//#include <iostream>
//
//using namespace std;
//
//class myclass
//{
//private:
//	int* arr;
//	int size;
//public:
//	
//	myclass(int size)
//	{
//		this->size = size;
//		arr = new int[size];
//		cout << "Вызвался конструктор " << this << endl;
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = i;
//		}
//	}
//	~myclass()
//	{
//		cout << "Вызвался деструктор " << this << endl;
//		delete[] this->arr;
//	}
//	myclass(const myclass& other)
//	{
//		cout << "Вызвался конструктор копирование " << this << endl;
//		this->size = other.size;
//		this->arr = new int[other.size];
//		for (int l = 0; l < other.size; l++)
//		{
//			this->arr[l] = other.arr[l];
//		}
//	}
//	myclass & operator = (const myclass& other)
//	{
//		//delete[] this->arr;
//		cout << "Вызвался оператор присвоивание " << this << endl;
//		if (this->size != 0)
//		{
//			cout << "\nMассив HE был равен 0!\n\n";
//			delete[] this->arr;
//		}
//		else
//			cout << "\n\nMассив был равен 0!\n\n";
//		this->size = other.size;
//		this->arr = new int[other.size];
//		for (int i = 0; i < other.size; i++)
//		{
//			this->arr[i] =other.arr[i]+1;
//		}
//
//		return *this;
//
//	}
//	void print()
//	{
//		cout << "Вызвался принт " << this << endl;
//		cout << "arr [ ";
//		for (int j = 0; j < this->size; j++)
//		{
//			cout << arr[j] << " ";
//		}
//		cout << "]" << endl;
//	}
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	myclass a(10);
//	a.print();
//	myclass b(5);
//	b.print();
//	a.operator=(b);//or a = b;
//	a.print();
//	myclass c(a);
//	c.print();
//}
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Humen
{
private:
	string name;
	int age;
	static int ID;
	int id;
public:
	Humen()
	{
		name = "";
		age = 0;
		id = 0;
	}
	Humen(string name, int age)
	{
		this->id = ++this->ID;
		this->name = name;
		this->age = age;
	}
	~Humen()
	{

	}

	void print()
	{
		cout << "id:" << id << " name:" << name << " age:" << age << endl;
	}
};
int Humen::ID = 0;

class myString
{
public:
	myString()
	{
		str = nullptr;
		Length = 0;
	}
	myString(const char* str)
	{
		cout << "Вызвался конструктор " << this << endl;
		Length = strlen(str);
		this->str = new char[Length + 1];
		for (int i = 0; i < Length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[Length] = '\0';
	}
	myString(const myString& other)
	{
		Length = strlen(other.str);

		/*if (&other)
		{
			this->str = new char[Length + 1];
			strcpy(str, other.str);
		}
		else
			str = nullptr;
*/

/*
str = new char[Length + 1];
for (int j = 0; j < Length; j++)
{
	str[j] = other.str[j];
}
str[Length] = '\0';
	}
	~myString()
	{
		cout << "Вызвался деструктор " << this << endl;
		delete[] str;
	}
	myString& operator=(const myString& other)
	{
		if (this->str != nullptr)
			delete[] this->str;
		Length = strlen(other.str);
		str = new char[Length + 1];
		for (int j = 0; j < Length; j++)
		{
			str[j] = other.str[j];
		}
		str[Length] = '\0';
		return *this;
	}
	myString operator+(const myString& other)
	{
		myString temp;
		int thisLength = strlen(this->str);
		int otherLength = strlen(other.str);
		temp.str = new char[thisLength + otherLength + 1];
		int i = 0;
		for (; i < thisLength; i++)
		{
			temp.str[i] = this->str[i];
		}
		for (int j = 0; j < otherLength; i++, j++)
		{
			temp.str[i] = other.str[j];
		}
		temp.str[thisLength + otherLength] = '\0';
		return temp.str;
	}
	bool operator==(const myString& other)
	{
		if (other.Length == this->Length)
		{
			for (int i = 0; i < Length; i++)
			{
				if (str[i] != other.str[i])
				{
					return 0;
					break;
				}
			}
			return 1;
		}
		return 0;
	}
	bool operator!=(const myString& other)
	{
		return !(this->operator==(other));
	}
	void print()
	{
		cout << str << endl;
	}

private:
	char* str;
	int Length;
};

int main()
{
	setlocale(LC_ALL, "ru");
	myString str1("Hello");
	myString str2("World");
	myString str3("Helloй");
	//str3 = str1 + " " + str2;
	//str3.print();
	cout << (str3 == str1) << endl;
	cout << (str3 != str1) << endl;
}
*/

/*
 #define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Humen
{
private:
	string name = "";
	int age = 0;
public:
	Humen()
	{

	}
	Humen(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	Humen(const Humen& h)
	{
		this->name = h.name;
		this->age = h.age;
	}
	Humen& operator=(const Humen& h)
	{
		this->name = h.name;
		this->age = h.age;
		return *this;
	}
	int getAge()
	{
		return age;
	}
	Humen& operator++()
	{
		age++;
		return *this;
	}
	Humen& operator++(int)
	{
		Humen newH;
		newH.age++;
		return *this;
	}
	void print()
	{
		cout << "name: " << name << " age: " << age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Humen h0("Gary", 19);
	Humen h1("Vadim",25);
	h1.print();
	Humen h2 = h0;
	h2.print();
	h1 = h0;
	h1.print();
	(++h1).getAge();
	h1.print();
	cout << h1.getAge() << endl;
	h1++;
	cout << h1.getAge() << endl;
	++h1;
	cout << h1.getAge() << endl;

}
 */

/*
#include <iostream>
using namespace std;

class point
{
private:
	double x;
	double y;
public:
	point()
	{
		cout << "\nКонструктор без параметр " << this << endl;
		x = 0;
		y = 0;
	}
	point(int X, int Y)
	{
		cout << "\nКонструктор с параметр " << this << endl;
		x = X;
		y = Y;
	}
	point(const point& other)
	{
		cout << "\nКонструктор копирование " << this << endl;
		x = other.x;
		y = other.y;
	}
	//~point()
	//{
	//	cout << "\nДеструктор копирование " << this << endl;
	//}
point& operator++()
{
	++x;
	++y;
	return *this;
}
point operator++(int)
{
	point temp(*this);
	x++;
	y++;
	return temp;
}
point operator=(const point& other)
{
	x = other.x;
	y = other.y;
	return *this;
}
point& operator--()
{
	x--;
	y--;
	return *this;
}
point operator--(int)
{
	point temp(*this);
	x--;
	y--;
	return temp;
}
point& operator*(const point& other)
{
	point temp;
	temp.x = this->x * other.x;
	temp.y = this->y * other.y;
	return temp;
}
point& operator/(const point& other)
{
	if (other.x == 0 && other.y == 0)
	{
		cout << "Нельзя делит на 0" << endl;
		x = 0;
		y = 0;
		return *this;
	}
	point temp;
	temp.x = this->x / other.x;
	temp.y = this->y / other.y;
	return temp;
}

void print()
{
	cout << "\nПринт " << this << endl;
	cout << "x = " << x << " y = " << y << endl;
}
};

int main()
{
	setlocale(LC_ALL, "ru");
	point a(5, 5);
	a.print();
	point b(5, 5);
	b.print();
	point c(2, 2);
	c.print();
	a = c = b;
	a.print();
	a = a * b;
	a.print();
	point d(2, 2);
	a = c / d;
	a.print();

}
*/

/*
#include <iostream>
using namespace std;

class Apple
{
private:
	int id;
	int weight;
	string color;
	static int ID;
public:
	Apple(int weight, string color)
	{
		this->id = ++this->ID;
		this->weight = weight;
		this->color = color;
	}
	static void newColor(Apple& apple, string color)
	{
		apple.color = color;
	}
	int getId()
	{
		return id;
	}
	void newColorNoStatic(string color)
	{
		this->color = color;
	}
	Apple operator=(const Apple& other)
	{
		this->id = other.id;
		this->weight = other.weight;
		this->color = other.color;
	}
	bool operator==(const Apple& other)
	{
		return(this->weight == other.weight && this->color == other.color);
	}
	void print()
	{
		cout << "id: " << id << " weight: " << weight << " color: " << color << endl;
	}
	friend ostream& operator<<(ostream& out, const Apple& apple);
};
int Apple::ID = 0;
ostream& operator<<(ostream& out, const Apple& apple)
{
	return(out << "id: " << apple.id << " weight: " << apple.weight << " color: " << apple.color);
}
int main()
{
	 == != >= <= 
Apple apple1(150, "Green");
apple1.print();
Apple apple2(200, "Red");
apple2.print();
cout << apple2.getId();
Apple apple3(200, "Yellow");
apple3.print();
Apple::newColor(apple3, "Red");
apple3.print();
cout << apple1;
apple2.newColorNoStatic("Yellow");
apple2.print();
}
*/

/*#include <iostream>
#include <string>
using namespace std;

class Image
{
public:
	void imegaInfo()
	{
		for (int i = 0; i < LEENGTH; i++)
		{
			cout << "#" << i << " " << pixels[i].pixInfo() << endl;
		}
	}
private:
	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}
		string pixInfo()
		{
			return ("pix r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b));
		}
	private:
		int r;
		int g;
		int b;
	};
	static const int LEENGTH = 5;
	Pixel pixels[LEENGTH]
	{
		Pixel(5,9,7),
		Pixel(1,0,9),
		Pixel(5,8,3),
		Pixel(7,1,0),
		Pixel(8,9,7),
	};
};

int main()
{
	Image img;
	img.imegaInfo();
}*/

/*#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}
	void print()
	{
		cout << "x = " << x << " y = " << y << endl;
	}
	bool operator <(const Point& other)
	{
		return(this->x < other.x&& this->y < other.y);
	}
	bool operator>(const Point& other)
	{
		//return !(this->operator<(other));
		return(this->x > other.x&& this->y > other.y);
	}
	bool operator==(const Point& other)
	{
		return (this->x == other.x && this->y == other.y);
	}
	bool operator!=(const Point& other)
	{
		return !(this->operator==(other));
	}
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		return *this;
	}
	Point& operator++()
	{
		x++;
		y++;
		return *this;
	}
	Point operator++(int)
	{
		Point temp(*this);
		x++;
		y++;
		return temp;
	}
	Point& operator*(const Point& other)
	{
		Point temp;
		temp.x = x * other.x;
		temp.y = y * other.y;
		return temp;
	}
};

int main()
{
	//Point point[2]
	//{
	//	Point(10,5),
	//	Point(8,3)
	//};
	Point a(10, 5);
	Point b(1, 0);
	cout << (a < b) << endl;
	cout << (a > b) << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	a.print();
	b.print();
	b = ++a;
	a.print();
	b.print();
	b = a++;
	a.print();
	b.print();
	Point c;
	c = a * b;
	c.print();
}*/

/*#include <iostream>
#include <string>
using namespace std;

//class Image
//{
//public:
//	void getPixInfo()
//	{
//		for (int i = 0; i < LENGTH; i++)
//		{
//			cout << "#" << i << " " << pixels[i].pixInfo() << endl;
//		}
//	}
//private:
//
//	static const int LENGTH = 3;
//	Pixel pixels[LENGTH]
//	{
//		Pixel(4,6,8),
//		Pixel(8,1,0),
//		Pixel(0,6,7),
//	};
//};

class Pixel
{
public:
	Pixel()
	{
		r = g = b = 0;
	}
	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	//string pixInfo()
	//{
	//	return ("pix r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b));
	//}
	void pixInfo()
	{
		cout << "pix r = " << r << " g = " << g << " b = " << b << endl;
	}
private:
	int r;
	int g;
	int b;
};

int main()
{
	const int Length = 2;
	Pixel arr[Length];
	arr[0].pixInfo();
	arr[0] = Pixel(4, 5, 6);
	arr[0].pixInfo();
	arr[0] = Pixel();
	arr[0].pixInfo();
	Pixel arr1[Length]
	{
		Pixel(5,9,3),
		Pixel(7,4,2),
	};
	arr1[0+1].pixInfo();

	Pixel* arr2 = new Pixel[Length]
	{
		Pixel(2,9,5),
		Pixel(9,6,3),
	};
	arr2[0+0+0+0+0+1].pixInfo();
	arr2[1] = Pixel(0, 0, 1);
	arr2[1].pixInfo();

	delete[] arr2;
}*/

//#include <iostream>
//using namespace std;
//
//
//class Cap
//{
//private:
//	string color = "black";
//public:
//	string getCap()
//	{
//		return color;
//	}
//};
//
//class Model
//{
//private:
//	Cap cap;
//public:
//	void modelCap()
//	{
//		cout << "цвет этот кепка " << cap.getCap() << endl;
//	}
//};
//
//class Humen
//{
//public:
//	void Think()
//	{
//		brain.Think();
//	}
//	void colorMyCap()
//	{
//		cout << "Моя кепка " << cap.getCap() << " цвета" << endl;
//	}
//private:
//	class Brain
//	{
//	private:
//
//	public:
//		void Think()
//		{
//			cout << "Я думаю " << endl;
//		}
//	};
//
//	Brain brain;
//	Cap cap;
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Humen humen;
//	humen.Think();
//	humen.colorMyCap();
//
//	Model model;
//	model.modelCap();
//}

//#include <iostream>
//using namespace std;
//
//class Humen
//{
//private:
//	string name;
//	int age;
//public:
//	string getName()
//	{
//		return name;
//	}
//	void setName(string name)
//	{
//		this->name = name;
//	}
//	int getAge()
//	{
//		return age;
//	}
//	void setAge(int age)
//	{
//		this->age = age;
//	}
//};
//
//class Studen : public Humen
//{
//	string group;
//public:
//	void Learn()
//	{
//		cout << "Я учусь!" << endl;
//	}
//};
//
//class ExternaStudent : public Humen
//{
//public:
//	void Learn()
//	{
//		cout << "Я не учусь! ха-ха " << endl; 
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Studen st;
//	st.setName("Qadam ");
//	cout << st.getName();
//	st.setAge(99);
//	cout << st.getAge() << " ";
//	st.Learn();
//
//	ExternaStudent exSt;
//	exSt.setName("Qurban ");
//	cout << exSt.getName();
//	exSt.Learn();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		msg = "po umolch";
//	}
//	A(string msg)
//	{
//		this->msg = msg;
//	}
//	A(int res)
//	{
//		this->msg = to_string(res);
//	}
//	void print()
//	{
//		cout << msg << endl;
//	}
//private:
//	string msg;
//private:
//	string msgB;
//};
//
//class B : public A
//{
//public:
//	B():A()
//	{
//
//	}
//};
//
//int main()
//{
//	B temp;
//	temp.print();
//}

//#include <iostream>
//using namespace std;
//
//class pistolet
//{
//public:
//	virtual void Shoot()
//	{
//		cout << "BANG!" << endl;
//	}
//};
//
//class pulemyot : public pistolet
//{
//public:
//	void Shoot() override
//	{
//		cout << "BOOM!" << endl;
//	}
//};
//
//class avtomat : public pistolet
//{
//public:
//	void Shoot()
//	{
//		cout << "DUFF,DUF,DUFFF!" << endl;
//	}
//};
//
//class player : public pistolet
//{
//public:
//	void Shoot(pistolet* gun)
//	{
//		gun->Shoot();
//	}
//};
//
//int main()
//{
//	pistolet ps;
//	pulemyot pm;
//	avtomat av;
//	player one;
//	one.Shoot(&pm);
//	player two;
//	two.Shoot(&av);
//}

//#include <iostream>
//using namespace std;
//
//class Weapen
//{
//public:
//	virtual void Shoot() = 0;
//};
//
//class Gun : public Weapen
//{
//	void Shoot() override
//	{
//		cout << "BANG!" << endl;
//	}
//};
//class Knife : public Weapen
//{
//	void Shoot() override
//	{
//		cout << "VJUH!" << endl;
//	}
//};
//
//class Player
//{
//public:
//	void Shoot(Weapen* weapen)
//	{
//		weapen->Shoot();
//	}
//};
//
//int main()
//{
//	Gun gun;
//	Knife knife;
//	Player player;
//	player.Shoot(&knife);
//
//}

//#include <iostream>
//using namespace std;
//
//class Msg
//{
//private:
//	string msg;
//public:
//	Msg(string msg)
//	{
//		this->msg = msg; 
//	}
//	virtual string getMsg()
//	{
//		return msg;
//	}
//};
//
//class Braketsmsg : public Msg
//{
//public:
//	Braketsmsg(string msg) :Msg(msg)
//	{
//
//	}
//	string getMsg() override
//	{
//		return "[" +::Msg::getMsg() + "]";
//	}
//};
//
//class Print
//{
//public:
//	void print(Msg* msg)
//	{
//		cout << msg->getMsg() << endl;
//	}
//};
//
//int main()
//{
//	Msg ms("Hello");
//	ms.getMsg();
//	Print pr;
//	pr.print(&ms);
//	
//	Braketsmsg br("Hello world");
//	br.getMsg();
//	Print pr1;
//	pr1.print(&br);
//}

//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//	Car()
//	{
//		cout << "constructor Car" << endl;
//	}
//	void Drive()
//	{
//		cout << "Я еду!" << endl;
//	}
//	~Car()
//	{
//		cout << "destructor Car" << endl;
//	}
//};
//
//class Airplain
//{
//public:
//	Airplain()
//	{
//		cout << "constructor Airplain" << endl;
//	}
//	void Flay()
//	{
//		cout << "Я лечу!" << endl;
//	}
//	~Airplain()
//	{
//		cout << "destructor Airplain" << endl;
//	}
//};
//
//class CarAir : public Airplain, public Car
//{
//public:
//	CarAir()
//	{
//		cout << "constructor CarAir" << endl;
//	}
//	~CarAir()
//	{
//		cout << "destructor CarAir" << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	CarAir cr;
//}

//#include <iostream>
//#include <fstream>
//#include <stdio.h>
//#include <cstdio>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	ofstream fout;
//	fout.open("file.txt",ofstream::app);
//
//	if (!fout.is_open())
//	{
//		cout << "Error" << endl;
//	}
//	else
//	{
//		cout << "Connect" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "Введите строку: ";
//			char str[255];
//			gets_s(str);
//			fout << str << "\n";
//		}
//		cout << "Сохранено!" << endl;
//	}
//
//	fout.close();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Weapon
//{
//private:
//	static int SystemDVD;
//public:
//	int getSys()
//	{
//		return SystemDVD;
//	}
//	virtual void Shoot() = 0;
//};
//
//class Gun :public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "BANG" << endl;
//	}
//};
//
//class Knife :public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "VJUH" << endl;
//	}
//};
//
//class Bazuka :public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "BADABOOM" << endl;
//	}
//};
//
//class MachinGun :public Weapon
//{
//public:
//	void Shoot() override
//	{
//		cout << "BANG, BANG, BANG" << endl;
//	}
//};
//
//class Player
//{
//public:
//	void Shoot(Weapon* weapon)
//	{
//		weapon->Shoot();
//	}
//};
//
//int main()
//{
//	Player player;
//	Gun gun;
//	MachinGun mGun;
//	Knife knife;
//	Bazuka bazuka;
//	player.Shoot(&bazuka);
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//		cout << "Виделено массив в объекте А" << endl;
//	}
//	virtual ~A()
//	{
//		cout << "Освобождено массив в объекте А" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	B()
//	{
//		cout << "Виделено массив в объекте B" << endl;
//	}
//	~B() override
//	{
//		cout << "Освобождено массив в объекте B" << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	A *pb = new B;
//	delete pb;
//}

//#include <iostream>
//using namespace std;
//
//class Humen
//{
//	string name;
//	int age;
//	int weight;
//public:
//	Humen(string name)
//	{
//		this->name = name;
//		this->age = 0;
//		this->weight = 0;
//	}
//	Humen(string name, int age) :Humen(name)
//	{
//		this->age = age;
//	}
//	Humen(string name, int age, int weight) :Humen(name,age)
//	{
//		this->weight = weight;
//	}
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Humen h("Boby",10);
//
////}

//#include <iostream>
//using namespace std;
//
//class Msg
//{
//	string msg;
//public:
//	Msg(string msg)
//	{
//		this->msg = msg;
//	}
//	virtual string getMsg()
//	{
//		return msg;
//	}
//};
//
//class BracketMsg :public Msg
//{
//public:
//	BracketMsg(string msg) :Msg(msg)
//	{
//
//	}
//	string getMsg() override
//	{
//		return "[" + Msg::getMsg() + "]";
//	}
//};
//
//class Print
//{
//public:
//	void printMsg(Msg* msg)
//	{
//		cout << msg->getMsg() << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Msg msg("Gold");
//	BracketMsg bMsg("Hello");
//	Print print;
//	print.printMsg(&bMsg);
//
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//
//class Point
//{
//	int x, y, z;
//public:
//	Point()
//	{
//		x = y = z = 0;
//	}
//	Point(int x, int y, int z)
//	{
//		this->x = x;
//		this->y = y;
//		this->z = z;
//	}
//	void print()
//	{
//		std::cout << "X = " << x << "\tY = " << y << "\tZ = " << z << std::endl;
//	}
//};
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Point a(7, 8, 9);
//
//	std::string path = "Point.txt";
//	std::ofstream fout;
//	fout.open(path, std::ofstream::app);
//	if (fout.is_open())
//	{
//		/*std::cout << "Файл успешно открылось!" << std::endl;
//		fout.write((char*)&a, sizeof(Point));
//		std::cout << "Данные успешно сохранено!" << std::endl;*/
//	}
//	else
//		std::cout << "Ошибка при открытие файла!" << std::endl;
//	fout.close();
//
//	std::ifstream fin;
//	fin.open(path);
//	if (fin.is_open())
//	{
//		std::cout << "Файл успешно открылось!" << std::endl;
//		Point b;
//		while (fin.read((char*)&b, sizeof(Point)))
//		{
//			b.print();
//		}
//		std::cout << "Данные успешно выведен на консоле!" << std::endl;
//	}
//	else
//		std::cout << "Ошибка при открытие файла!" << std::endl;
//}

//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//class MyException : public exception
//{
//public:
//	MyException(const char* msg,int myVal):exception(msg)
//	{
//
//	}
//	int getMyVal()
//	{
//		return myVal;
//	}
//private:
//	int myVal=0;
//};
//
//void foo(int Val)
//{
//	if (Val == 0)
//	{
//		throw MyException("Error",Val);
//	}
//	cout << "x = " << Val << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	
//	try
//	{
//		foo(0);
//	}
//	catch (const exception& ex)
//	{
//		cout << ex.what() << endl;
//		//cout << ex.getMyVal() << endl;
//	}
//	catch (MyException& ex)
//	{
//		cout << ex.what() << endl;
//		cout << ex.getMyVal() << endl;
//	}
//	
//}

//#include <iostream>
//using namespace std;
//
//
//
//class PC
//{
//public:
//	int getState() { return State; }
//	void setState(int State)
//	{
//		this->State = State;
//	}
//	enum PCState { OFF, SLEEP, ON };
//private:
//	int State;
//};
//
//int main()
//{
//	PC pc;
//	pc.setState(PC::PCState::OFF);
//
//	switch (pc.getState())
//	{
//	case PC::PCState::OFF:
//		cout << "PC OFF!" << endl;
//		break;
//	case PC::ON:
//		cout << "PC ON!" << endl;
//		break;
//	case PC::SLEEP:
//		cout << "PC SLEEP!" << endl;
//		break;
//	default:
//		cout << "Error!";
//		break;
//	}
//
//}

//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y, z;
//public:
//	Point()
//	{
//		x = y = z = 0;
//	}
//};
//
//template <class T>
//class TypeSize
//{
//public:
//	TypeSize(T value)
//	{
//		this->value = value;
//	}
//
//	void DateTypeSize()
//	{
//		cout << "Size: " << sizeof(value) << " byte" << endl;
//	}
//protected:
//	T value;
//};
//
//template <class T1>
//class TypeInfo :public TypeSize<T1>
//{
//public:
//	TypeInfo(T1 value) :TypeSize<T1>(value)
//	{
//
//	}
//	void TypeInfoSize()
//	{
//		cout << "typeId: " << typeid(this->value).name() << endl;
//	}
//};
//class Humen
//{
//
//};
//int main()
//{
//	Point val;
//	TypeInfo<Point> ti(val);
//	ti.DateTypeSize();
//	ti.TypeInfoSize();
//}

//#include <iostream>
//using namespace std;
//
//template <class T>
//class List
//{
//public:
//	List();
//	~List();
//	int getSize() { return Size; }
//	void push_back(T date);
//	T& operator[](const int index);
//private:
//	template <class>
//	class Node
//	{
//	public:
//		Node* pNext;
//		T date;
//		Node(T date = T(), Node* pNext = nullptr)
//		{
//			this->date = date;
//			this->pNext = pNext;
//		}
//	};
//	Node<T>* head;
//	int Size;
//};
//
//template<class T>
//List<T>::List()
//{
//	head = nullptr;
//	Size = 0;
//}
//
//template<class T>
//List<T>::~List()
//{
//}
//
//template<class T>
//void List<T>::push_back(T date)
//{
//	if (head == nullptr)
//	{
//		head = new Node<T>(date);
//	}
//	else
//	{
//		Node<T>*carrent = this->head;
//		while (carrent->pNext != nullptr)
//		{
//			carrent = carrent->pNext;
//		}
//		carrent->pNext = new Node<T>(date);
//	}
//	Size++;
//}
//
//template<class T>
//T& List<T>::operator[](const int index)
//{
//	int counter = 0;
//	Node<T>* carrent = this->head;
//	while (carrent != nullptr)
//	{
//		if (counter == index)
//		{
//			return carrent->date;
//		}
//		carrent = carrent->pNext;
//		counter++;
//	}
//	// TODO: вставьте здесь оператор return
//}
//
//int main()
//{
//	List<int> lst;
//	lst.push_back(5);
//	lst.push_back(7);
//	lst.push_back(2);
//	cout << lst.getSize() << endl;
//	cout << lst[0] << endl;
//}

//#include <iostream>
//using namespace std;
//
//template <class T>
//class List
//{
//public:
//	List()
//	{
//		head = nullptr;
//		Size = 0;
//	}
//	int getSize() { return Size; }
//	void push_back(T date);
//	T& operator[](const int index);
//	void pop_front();
//	void clear();
//	~List() 
//	{
//		clear();
//		//cout << lst.getSize() << endl;
//	}
//private:
//	template <class>
//	class Node
//	{
//	public:
//		Node* pNext;
//		T date;
//		Node(T date = T(), Node* pNext = nullptr)
//		{
//			this->date = date;
//			this->pNext = pNext;
//		}
//	};
//	int Size;
//	Node<T>* head;
//};
//
//template<class T>
//void List<T>::push_back(T date)
//{
//	if (head == nullptr)
//	{
//		head = new Node<T>(date);
//	}
//	else
//	{
//		Node<T>* temp = head;
//		while (temp->pNext != nullptr)
//		{
//			temp = temp->pNext;
//		}
//		temp->pNext = new Node<T>(date);
//	}
//	Size++;
//}
//
//template<class T>
//T& List<T>::operator[](const int index)
//{
//	int count = 0;
//	Node<T>* temp = head;
//	while (temp != nullptr)
//	{
//		if (count == index)
//		{
//			return temp->date;
//		}
//		temp = temp->pNext;
//		count++;
//	}
//}
//
//template<class T>
//void List<T>::pop_front()
//{
//	Node<T>* temp = head;
//	head = head->pNext;
//	delete temp;
//	Size--;
//}
//
//template<class T>
//void List<T>::clear()
//{
//	while (Size)
//	{
//		pop_front();
//	}
//}
//
//int main()
//{
//	List<int> lst;
//	/*lst.push_back(15);
//	lst.push_back(5);
//	lst.push_back(1);
//	lst.push_back(66);*/
//	for (int i = 0; i < 5; i++)
//	{
//		lst.push_back(rand()%10);
//		//cout << lst[i] << endl;
//	}
//	//cout << lst.getSize() << endl;
//	for (int i = 0; i < lst.getSize(); i++)
//	{
//		cout << lst[i] << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//template <typename T>
//class List
//{
//public:
//	List()
//	{
//		head = nullptr;
//		Size = 0;
//	}
//	int getSize() { return Size; }
//	void push_back(T date);
//	T& operator[](const int index);
//	void pop_front();
//	void clear()
//	{
//		while (Size)
//		{
//			pop_front();
//		}
//	}
//	~List()
//	{
//		clear();
//	}
//private:
//	template<typename>
//	class Node
//	{
//	public:
//		Node* pNext;
//		T date;
//		Node(T date = T(), Node* pNext = nullptr)
//		{
//			this->date = date;
//			this->pNext = pNext;
//		}
//	};
//	int Size;
//	Node<T>* head;
//};
//
//template<typename T>
//void List<T>::push_back(T date)
//{
//	if (head == nullptr)
//	{
//		head = new Node<T>(date);
//	}
//	else
//	{
//		Node<T>* temp = head;
//		while(temp->pNext!=nullptr)
//		{
//			temp = temp->pNext;
//		}
//		temp->pNext = new Node<T>(date);
//	}
//	Size++;
//}
//
//template<typename T>
//T& List<T>::operator[](const int index)
//{
//	int searchIndex = 0;
//	Node<T>* temp = head;
//	while (temp != nullptr)
//	{
//		if (searchIndex == index)
//		{
//			return temp->date;
//		}
//		temp = temp->pNext;
//		searchIndex++;
//	}
//}
//
//template<typename T>
//void List<T>::pop_front()
//{
//	Node<T>* temp = head;
//	head = head->pNext;
//	delete temp;
//	Size--;
//}
//
//
//
//int main()
//{
//	List<int> lst;
//	for (int i = 0; i < 5; i++)
//	{
//		lst.push_back(rand() % 10);
//		cout << "[" << i << "] = " << lst[i] << endl;
//	}
//	cout << "--------" << endl;
//	cout << "SIZE= " << lst.getSize() << endl;
//	cout << "[0] = " << lst[0] << endl;
//
//	cout << "--------" << endl;
//}
//

//#include <iostream>
//using namespace std;
//
//template <class T>
//class List
//{
//public:
//	List();
//	~List();
//	int getSize() { return Size; }
//	void push_back(T date);
//	T& operator[](const int index);
//	void pop_front();
//	void clear();
//	void push_front(T date);
//private:
//
//	template <class>
//	class Node
//	{
//	public:
//		Node* pNext;
//		T date;
//		Node(T date = T(), Node* pNext = nullptr)
//		{
//			this->pNext = pNext;
//			this->date = date;
//		}
//	};
//	int Size;
//	Node<T>* head;
//};
//
//template <class T>
//List<T>::List()
//{
//	head = nullptr;
//	Size = 0;
//}
//
//template <class T>
//List<T>::~List()
//{
//	clear();
//}
//
//template<class T>
//void List<T>::push_back(T date)
//{
//	if (head == nullptr)
//	{
//		head = new Node<T>(date);
//	}
//	else
//	{
//		Node<T>* temp = head;
//		while (temp->pNext != nullptr)
//		{
//			temp = temp->pNext;
//		}
//		temp->pNext = new Node<T>(date);
//	}
//	Size++;
//}
//
//template<class T>
//T& List<T>::operator[](const int index)
//{
//	int count = 0;
//	Node<T>* temp = head;
//	while (temp != nullptr)
//	{
//		if (count == index)
//		{
//			return temp->date;
//		}
//		temp = temp->pNext;
//		count++;
//	}
//}
//
//template<class T>
//void List<T>::pop_front()
//{
//	Node<T>* temp = head;
//	head = head->pNext;
//	delete temp;
//	Size--;
//}
//
//template<class T>
//void List<T>::clear()
//{
//	while (Size)
//	{
//		pop_front();
//	}
//}
//
//template<class T>
//void List<T>::push_front(T date)
//{
//	head = new Node<T>(date, head);
//	Size++;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	List<int> ls;
//	ls.push_back(10);
//	ls.push_back(20);
//
//	cout << ls[0] << endl;
//	cout << ls.getSize() << endl;
//	ls.push_front(100);
//	cout << ls[0] << endl;
//	cout << ls.getSize() << endl;
//}

//#include <iostream>
//using namespace std;
//
//template <class T>
//class List
//{
//public:
//	List();
//	~List();
//	int getSize() { return Size; }
//	void push_back(T date);
//	T& operator[](const int index);
//	void pop_front();
//	void clear();
//	void push_front(T date);
//	void insert(T date, int index);
//	void remove(int index);
//	void pop_back();
//private:
//
//	template <class>
//	class Node
//	{
//	public:
//		Node* pNext;
//		T date;
//		Node(T date = T(), Node* pNext = nullptr)
//		{
//			this->pNext = pNext;
//			this->date = date;
//		}
//	};
//	int Size;
//	Node<T>* head;
//};
//
//template <class T>
//List<T>::List()
//{
//	head = nullptr;
//	Size = 0;
//}
//
//template <class T>
//List<T>::~List()
//{
//	clear();
//}
//
//template<class T>
//void List<T>::push_back(T date)
//{
//	if (head == nullptr)
//	{
//		head = new Node<T>(date);
//	}
//	else
//	{
//		Node<T>* temp = head;
//		while (temp->pNext != nullptr)
//		{
//			temp = temp->pNext;
//		}
//		temp->pNext = new Node<T>(date);
//	}
//	Size++;
//}
//
//template<class T>
//T& List<T>::operator[](const int index)
//{
//	int count = 0;
//	Node<T>* temp = head;
//	while (temp != nullptr)
//	{
//		if (count == index)
//		{
//			return temp->date;
//		}
//		temp = temp->pNext;
//		count++;
//	}
//}
//
//template<class T>
//void List<T>::pop_front()
//{
//	Node<T>* temp = head;
//	head = head->pNext;
//	delete temp;
//	Size--;
//}
//
//template<class T>
//void List<T>::clear()
//{
//	while (Size)
//	{
//		pop_front();
//	}
//}
//
//template<class T>
//void List<T>::push_front(T date)
//{
//	head = new Node<T>(date, head);
//	Size++;
//}
//
//template<class T>
//void List<T>::insert(T date, int index)
//{
//	if (index == 0)
//	{
//		push_front(date);
//	}
//	else
//	{
//		Node<T>* temp = this->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			temp = temp->pNext;
//		}
//		//Node<T>* newNode = new Node<T>(date, temp->pNext);
//		//temp->pNext = newNode;
//		temp->pNext = new Node<T>(date, temp->pNext);
//		Size++;
//	}
//}
//
//template<class T>
//void List<T>::remove(int index)
//{
//	if (index == 0)
//	{
//		pop_front();
//	}
//	else
//	{
//		Node<T>* temp = head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			temp = temp->pNext;
//		}
//		Node<T>* tempDel = temp->pNext;
//		temp->pNext = tempDel->pNext;
//		delete tempDel;
//	}
//	Size--;
//}
//
//template<class T>
//void List<T>::pop_back()
//{
//	remove(Size - 1);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	List<int> ls;
//	ls.push_back(10);
//	ls.push_back(20);
//
//	cout << ls[0] << endl;
//	cout << ls.getSize() << endl;
//	ls.push_front(100);
//	ls.push_front(200);
//	cout << ls[0] << endl;
//	cout << ls.getSize() << endl;
//	ls.insert(1000, 2);
//	ls.insert(2000, 0);
//	cout << "-------------------" << endl;
//	for (int i = 0; i < ls.getSize(); i++)
//	{
//		cout << ls[i] << endl;;
//	}
//	cout << "---------------------" << endl;
//	cout << ls.getSize() << endl;
//	ls.pop_back();
//	cout << "---------------------" << endl;
//	cout << ls.getSize() << endl;
//	cout << "-------------------" << endl;
//	for (int i = 0; i < ls.getSize(); i++)
//	{
//		cout << ls[i] << endl;;
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//class List
//{
//public:
//	List()
//	{
//		Size = 0;
//		head = nullptr;
//	}
//	static int getSize1() { return Size1; }
//	int getSize() { return Size; }
//	void push_back(T date);
//	T& operator[](int index);
//	void pop_front()
//	{
//		Node<T>* temp = head;
//		head = head->pNext;
//		delete temp;
//		Size--;
//		Size1--;
//	}
//	void clear()
//	{
//		while (Size1)
//		{
//			pop_front();
//		}
//	}
//	~List()
//	{
//		clear();
//	}
//	void push_front(T date)
//	{
//		head = new Node<T>(date, head);
//		Size++;
//	}
//	void insert(T date, int index)
//	{
//		if (index == 0)
//		{
//			push_front(date);
//		}
//		else
//		{
//			Node<T>* temp = head;
//			for (int i = 0; i < index - 1; i++)
//			{
//				temp = temp->pNext;
//			}
//			temp->pNext = new Node<T>(date, temp->pNext);
//			Size++;
//		}
//	}
//	void removeAt(int index)
//	{
//		if (index == 0)
//		{
//			pop_front();
//		}
//		else
//		{
//			Node<T>* temp = head;
//			for (int i = 0; i < index - 1; i++)
//			{
//				temp = temp->pNext;
//			}
//			Node<T>* deltemp = temp->pNext;
//			temp->pNext = deltemp->pNext;
//			delete deltemp;
//			Size--;
//			Size1--;
//		}
//	}
//	void pop_back()
//	{
//		removeAt(Size - 1);
//	}
//private:
//	template<typename>
//	class Node
//	{
//	public:
//		Node* pNext;
//		T date;
//		Node(T date = T(), Node* pNext = nullptr)
//		{
//			this->date = date;
//			this->pNext = pNext;
//			Size1++;
//		}
//	};
//	int Size;
//	static int Size1;
//	Node<T>* head;
//};
//template <typename T>
//int List<T>::Size1 = 0;
//
//template<typename T>
//void List<T>::push_back(T date)
//{
//	if (head == nullptr)
//	{
//		head = new Node<T>(date);
//	}
//	else
//	{
//		Node<T>* temp = head;
//		while (temp->pNext != nullptr)
//		{
//			temp = temp->pNext;
//		}
//		temp->pNext = new Node<T>(date);
//	}
//	Size++;
//}
//
//template<typename T>
//T& List<T>::operator[](int index)
//{
//	int count = 0;
//	Node<T>* temp = head;
//	while (temp != nullptr)
//	{
//		if (count == index)
//		{
//			return temp->date;
//		}
//		temp = temp->pNext;
//		count++;
//	}
//}
//
//
//int main()
//{
//	List<int> ls;
//	ls.push_back(10);
//	ls.push_back(20);
//	ls.push_back(30);
//	ls.push_back(40);
//	for (int i = 0; i < ls.getSize1(); i++)
//	{
//		cout << ls[i] << endl;
//	}
//	cout << "**************************" << endl;
//	cout << "No static: " << ls.getSize() << endl;
//	cout << "Static: " << ls.getSize1() << endl;
//	cout << ls[2] << endl;
//
//	ls.pop_back();
//
//	cout << "**************************" << endl;
//	for (int i = 0; i < ls.getSize1(); i++)
//	{
//		cout << ls[i] << endl;
//	}
//	cout << "**************************" << endl;
//	cout << "No static: " << ls.getSize() << endl;
//	cout << "Static: " << ls.getSize1() << endl;
//	cout << ls[2] << endl;
//
//}

vector STL:
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> myVect = { 1,5,9,3,7,8,6,4 };
//	vector<int>::iterator vIt = myVect.begin();
//
//	/*cout << "[";
//	for (;vIt != myVect.end(); vIt++)
//	{
//		cout << *(vIt) << " " << " ";
//	}
//	cout << "]" << endl;*/
//	cout << "[";
//	for (int i = 0; i < myVect.size(); i++)
//	{
//		cout << myVect.at(i) << " " << " ";
//	}
//	cout << "]" << endl;
//
//	advance(vIt, 3);
//	//myVect.insert(vIt, 0);
//
//	advance(vIt, 1);
//	myVect.erase(vIt);
//
//	cout << "[";
//	for (int i = 0; i < myVect.size(); i++)
//	{
//		cout << myVect.at(i) << " " << " ";
//	}
//	cout << "]" << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> myVect = { 1,5,9,3,7,8,6,4 };
//	vector<int>::iterator vIt = myVect.begin();
//
//	/*cout << "[";
//	for (;vIt != myVect.end(); vIt++)
//	{
//		cout << *(vIt) << " " << " ";
//	}
//	cout << "]" << endl;*/
//	cout << "[";
//	for (int i = 0; i < myVect.size(); i++)
//	{
//		cout << myVect.at(i) << " " << " ";
//	}
//	cout << "]" << endl;
//
//	advance(vIt, 3);
//	//myVect.insert(vIt, 0);
//
//	advance(vIt, 1);
//	myVect.erase(vIt);
//
//	cout << "[";
//	for (int i = 0; i < myVect.size(); i++)
//	{
//		cout << myVect.at(i) << " " << " ";
//	}
//	cout << "]" << endl;
//}

//#include <iostream>
//#include <list>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> mV = { 10,2,3,4,5 };
//	auto it = mV.begin();
//	for (; it != mV.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << "-----" << endl;
//	mV.push_back(15);
//	cout << "posledni element = " << mV.back() << endl;
//	cout << "sum element = " << mV.size() << endl;
//	cout << "skolko pamyat videleno = " << mV.capacity() << endl;
//	//mV.reserve(150);//заранее выделение память
//	cout << "skolko pamyat videleno = " << mV.capacity() << endl;
//	//mV.resize(20);//skolko pamyat videleno ot progera zapolnit null `0`
//	//mV.clear();//polnoe ochistka
//	cout << "sostoyania vectora(0-polniy, 1-pusto): " << mV.empty() << endl;
//	//mV.emplace_back(15987);///добавить элемен в конце
//	//cout << "x = " << mV.front() << endl; //печатаеть первый элемент массива
//	for (int i = 0; i < mV.size(); i++)
//	{
//		cout << mV[i] << endl;
//	}
//	cout << "---------" << endl;
//	vector<int> numbers = { 1, 2, 3, 4, 5 };
//	auto iter = numbers.begin();   // константный итератор указывает на первый элемент
//	numbers.emplace(iter + 2, 8); // добавляем после второго элемента  numbers = { 1, 2, 8, 3, 4, 5};
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		cout << numbers[i] << endl;
//	}
//
//
//}

//#include <iostream>
//#include <list>
//#include <vector>
//using namespace std;
//
//
//int main()
//{
//	list<int> mL = { 1,2,3,4,5 };
//	cout << "size = " << mL.size() << endl;
//	list<int>::iterator it = mL.begin();
//	advance(it, 4);
//	mL.emplace(++it, 18);
//	for (int n : mL)
//		cout << n << "\t";
//	cout << endl << endl;
//
//	std::list<int> numbers = { 1, 2, 3, 4, 5 };
//	auto iter = numbers.cbegin(); // итератор указывает на второй элемент
//	numbers.emplace(iter, 8);
//	for (int n : numbers)
//		cout << n << "\t";
//	cout << endl << endl;
//
//	//vector<int> mV = { 1,2,3,4,5 };
//	////vector<int> mV1 = { 6,7,8,9,10 };
//	////mV.swap(mV1);
//	////mV.assign(2, 55);
//	//auto it = mV.begin();
//	//////mV.swap(mV1,mV); xxxxxxx
//	////for (int i = 0; i < mV.size(); i++)
//	////{
//	////	cout << mV.at(i) << endl;
//	////}
//	////cout << "-------" << endl;
//	////auto it1 = mV1.end();
//	////for (; it1 != mV1.begin();)
//	////{
//	////	--it1;
//	////	cout << *it1 << endl;
//	////}
//	////mV1.insert(it, 77);
//	//
//	////mV.assign(10, 55);
//	//mV.erase(it+2);
//	//while (it != mV.end())
//	//{
//	//	cout << *it << endl;;
//	//	++it;
//	//}
//}

//#include <iostream>
//#include <list>
//#include <vector>
//#include <forward_list>
//using namespace std;
//
//
//int main()
//{
//	forward_list<int> mFL = { 1,2,3,4,5 };
//	auto it = mFL.begin();
//
//	mFL.emplace_front(10);
//	it = mFL.begin();
//	cout << mFL.front() << endl;
//	mFL.erase_after(it);
//
//	cout << "[  ";
//	for (int n : mFL)
//		cout << n << "\t";
//	cout << "]\n\n";
//
//	/*list<int> mL = { 1,2,3,4,5 };
//	cout << "size = " << mL.size() << endl;
//	list<int>::iterator it = mL.begin();
//	advance(it, 1+2);
//	mL.emplace(it, 18);
//	for (int n : mL)
//		cout << n << "\t";
//	cout << endl << endl;
//
//	std::list<int> numbers = { 1, 2, 3, 4, 5 };
//	auto iter = numbers.cbegin();
//	numbers.emplace(iter, 8);
//	for (int n : numbers)
//		cout << n << "\t";
//	cout << endl << endl;*/
//
//	//vector<int> mV = { 1,2,3,4,5 };
//	////vector<int> mV1 = { 6,7,8,9,10 };
//	////mV.swap(mV1);
//	////mV.assign(2, 55);
//	//auto it = mV.begin();
//	//////mV.swap(mV1,mV); xxxxxxx
//	////for (int i = 0; i < mV.size(); i++)
//	////{
//	////	cout << mV.at(i) << endl;
//	////}
//	////cout << "-------" << endl;
//	////auto it1 = mV1.end();
//	////for (; it1 != mV1.begin();)
//	////{
//	////	--it1;
//	////	cout << *it1 << endl;
//	////}
//	////mV1.insert(it, 77);
//	//
//	////mV.assign(10, 55);
//	//mV.erase(it+2);
//	//while (it != mV.end())
//	//{
//	//	cout << *it << endl;;
//	//	++it;
//	//}
//}

//#include <iostream>
//#include <set>
//#include <forward_list>
//#include <map>
//using namespace std;
//
//int main()
//{
//	/*set<int> St;
//	for (int i = 0; i < 10; i++)
//	{
//		St.insert(rand() % 10);
//	}
//
//	for (auto n : St)
//		cout << n << endl;*/
//
//		/*forward_list<int> fl = {1,2,3,4,5};
//		auto it = fl.begin();
//		for (int n : fl)
//			cout << n << " " << " ";
//		cout << endl;
//		fl.emplace_after(it, 15);
//		for (int n : fl)
//			cout << n << " " << " ";
//		cout << endl;*/
//
//		/*map<int,string> p;
//		p.emplace(1, "Said");
//		p.insert(pair<int, string>(2, "Qadam"));
//		p.insert(make_pair(3, "Qurbon"));
//		auto it = p.find(3);
//		cout << it->first << " " << it->second << endl;
//		cout << p[1] << "\np.at(2): " << p.at(3) << endl;*/
//
//		/*multimap<int, string> mP;
//		mP.emplace(4, "Shurik");
//		mP.emplace(4, "Qadam");
//		mP.emplace(4, "Shurik");
//		auto it2 = mP.find(5);
//		cout << it2->second << endl;*/
//}

//#include <iostream>
//#include <thread>
//#include <chrono>
//using namespace std;
//void DrWorker();
//void DoWork()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Id port " << this_thread::get_id() << " " << i << "\n";
//		this_thread::sleep_for(chrono::milliseconds(500));
//	}
//}
//
//int main()
//{
//	thread th(DoWork);
//	thread th2(DoWork);
//	thread th3(DoWork);
//	thread th4(DrWorker);
//	//th.detach();
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "ID PORT " << this_thread::get_id() << " " << i << endl;
//		this_thread::sleep_for(chrono::milliseconds(500));
//	}
//	th.join();
//	th2.join();
//	th3.join();
//	th4.join();
//}
//
//void DrWorker()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "ID PORT " << this_thread::get_id() << " " << i << endl;
//		this_thread::sleep_for(chrono::milliseconds(750));
//	}
//}

что бы файл два раза не подключть:
//#pragma once
//#ifndef _BAR_H_
//
//#define _BAR_H_
//
//#include "bar.h"
//#include <iostream>
//using namespace std;
//
//void foo()
//{
//	cout << "Hello ";
//}
//#endif
//
//
//#pragma once
//#ifndef _FOO_H_
//#define _FOO_H_
//#include "foo.h"
//
//#include <iostream>
//using namespace std;
//
//void Bar()
//{
//	cout << "World" << endl;
//}
//#endif // !_FOO_H_

3