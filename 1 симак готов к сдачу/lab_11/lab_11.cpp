#include <iostream>
using namespace std;

/*Записи в линейном списке содержат ключевое поле типа
int.Сформировать однонаправленный список.Удалить из
него К элементов, начиная с заданного номера, добавить
элемент перед элементом с заданным ключом;*/

//template <typename T>
class List
{
public:
	List();
	~List();
	int getSize() { return Size; }
	int& operator[](int index);
	void push_back(int date);
	void insert(int index, int date);
	void remove(int index, int count);
private:
	//template <typename>
	class Node
	{
	public:
		Node* pNext;
		int date;
		Node(int date = 0, Node* pNext = nullptr)
		{
			this->date = date;
			this->pNext = pNext;
		}
	};
	int Size;
	Node* head;
};


List::List()
{
	Size = 0;
	head = nullptr;
}

List::~List()
{
}

int& List::operator[](int index)
{
	int count = 0;
	Node* temp = head;
	while (temp != nullptr)
	{
		if (count == index)
		{
			return temp->date;
		}
		temp = temp->pNext;
		count++;
	}
}

void List::push_back(int date)
{
	if (head == nullptr)
	{
		head = new Node(date);
	}
	else
	{
		Node* temp = head;
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		temp->pNext = new Node(date);
	}
	++Size;
}

void List::insert(int index, int date)
{
	if (index == 0)
	{
		head = new Node(date, head);
	}
	else
	{
		/*int count = 0;
		Node* temp = head;
		for (int i = 0; i < index - 1; i++)
		{
			temp = temp->pNext;
		}
		temp = new Node(date, temp);*/
		--index;
		Node* temp = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			temp = temp->pNext;
		}
		//Node<T>* newNode = new Node<T>(date, temp->pNext);
		//temp->pNext = newNode;
		temp->pNext = new Node(date, temp->pNext);
	}
	Size++;
}

void List::remove(int index, int count)
{
	while (count)
	{
		if (index == 0)
		{
			Node* temp = head;
			head = head->pNext;
			delete temp;
		}
		else
		{
			Node* temp = head;
			for (int i = 0; i < index - 1; i++)
			{
				temp = temp->pNext;
			}
			Node* delVal = temp->pNext;
			temp->pNext = delVal->pNext;
			delete delVal;
		}
		--Size;
		--count;
	}
}

int main()
{
	List ls;
	for (int i = 0; i < 8; i++)
	{
		ls.push_back(rand() % 10);
	}

	for (int i = 0; i < ls.getSize(); i++)
	{
		cout << ls[i] << " " << " ";
	}
	cout << "\n------------------------\n";
	ls.remove(0, 3);
	//ls.insert(3, 99);
	for (int i = 0; i < ls.getSize(); i++)
	{
		cout << ls[i] << " " << " ";
	}
}