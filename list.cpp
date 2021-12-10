#include "List.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
template <class Data>
List<Data>::List()
{
	this->head = NULL;
	this->tail = NULL;
}
template <class Data>
int List<Data>::isEmpty()
{
	return (head == NULL);
}
template <class Data>
Node<Data> *List<Data>::get_head()
{
	return this->head;
}
template <class Data>
Node<Data> *List<Data>::get_tail()
{
	return this->tail;
}
template <class Data>
void List<Data>::Insert(Data s)
{
	Node<Data> *P = new Node<Data>(s);
	if (isEmpty())
	{
		head = P;
		tail = P;
	}
	else
	{
		tail->setRight(P); // ket noi voi danh sach
		P->setLeft(tail);  // P tro ve node ben trai
		tail = P;		   // luu lai vi tri cuoi
	}
}
template <class Data>
Node<Data> *List<Data>::Search(int IDData)
{
	Node<Data> *P = head;
	while (P != NULL && P->getData().Get_ID() != IDData) // duyet danh sach den khi tim thay hoac den khi het danh sach
	{
		P = P->getRight();
	}
	if (P != NULL)
	{
		cout << P->getData(); // tra ve vi tri tim thay
	}
	else
		cout << "KHONG TIM THAY! " << endl; // khong tim thay
	return P;
}

template <class Data>
Node<Data> *List<Data>::Delete_Node(int IDData)
{
	Node<Data> *temp = Search(IDData);
	if (temp != NULL)
	{
		if (head == temp)
			head = temp->getRight();
		if (temp->getRight() != NULL)
			temp->getRight()->setLeft(temp->getLeft());
		if (temp->getLeft() != NULL)
			temp->getLeft()->setRight(temp->getRight());
		if (tail == temp)
			tail = temp->getLeft();
	}
	return temp;
}
template <class Data>
Node<Data> *List<Data>::Update(int IDData)
{
	Node<Data> *P = Search(IDData);
	if (P != NULL)
	{
		Data s;
		cout << "\n\t----------CAP NHAT THONG TIN DATA----------" << endl;
		cin >> s;
		P->setData(s);
	}
	return P;
}

template <class Data>
void List<Data>::Input()
{
	int i = 1;
	Data s;
	do
	{
		cout << setw(20) << "----------THEM DATA---------" << endl;
		cin >> s;
		// s.Input();
		if (i != 0)
			Insert(s);
		cout << "Tiep tuc? (1.Yes 0.No): ";
		cin >> i;
		cout << endl;
	} while (i != 0); // nhap 0 de ket thuc
}
template <class out>
ostream &operator<<(ostream &cout, const List<out> &l)
{
	Node<out> *P = l.head;
	while (P != l.tail->getRight())
	{
		cout << P->getData();
		P = P->getRight();
	}
	cout << endl;
	return cout;
}
template <class Data>
void List<Data>::Staff_F()
{
	fstream Staff_file;
	Staff_file.open("E:\\CNTT3\\QuanLyCafe\\Staff.txt");
	Staff_file.clear();

	Node<Data> *P = head;
	Staff_file << setw(20) << "ID" << setw(20) << "FullName" << setw(20) << "Age" << setw(20) << "Phone" << setw(20) << "Salary" << endl;
	Staff_file << "--------------------------------------------------------------------------------------------------------------" << endl;
	while (P != tail->getRight())
	{
		Staff_file << P->getData();
		P = P->getRight();
	}
	cout << "DONE !" << endl;
	// Staff_file.close();
}
template <class Data>
void List<Data>::Food_F()
{
	fstream Food_file;
	Food_file.open("E:\\CNTT3\\QuanLyCafe\\Food.txt");
	Node<Data> *P = head;
	Food_file << setw(20) << "ID" << setw(20) << "Food's Name" << setw(20) << "Price" << endl;
	Food_file << "----------------------------------------------------------------------------------------" << endl;
	while (P != tail->getRight())
	{
		Food_file << P->getData();
		P = P->getRight();
	}
	cout << endl;
	Food_file.close();
}

// g++  List.cpp Staff.cpp Food.cpp FoodCategory.cpp main.cpp -o demo