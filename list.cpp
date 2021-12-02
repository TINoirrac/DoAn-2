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
		cout << "KHONG TIM THAY! "; // khong tim thay
	return P;
}

template <class Data>
void List<Data>::Delete_Node(int IDData)
{
	Node<Data> *temp = Search(IDData);
	if (head == temp)
		head = temp->getRight();
	if (temp->getRight() != NULL)
		temp->getRight()->setLeft(temp->getLeft());
	if (temp->getLeft() != NULL)
		temp->getLeft()->setRight(temp->getRight());
	if (tail == temp)
		tail = temp->getLeft();
}
template <class Data>
void List<Data>::Update(int IDData)
{
	Node<Data> *P = Search(IDData);
	Data s;
	cout << "\n\t----------CAP NHAT THONG TIN DATA----------" << endl;
	cin >> s;
	P->setData(s);
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
template <class Data>
void List<Data>::Show()
{
	Node<Data> *P = head;
	cout << "--------------------------------------------------------------------------------------------------------------" << endl;
	while (P != tail->getRight())
	{
		cout << P->getData();
		P = P->getRight();
	}
	cout << endl;
}

template <class Data>
void List<Data>::Show_file()
{
	fstream Show_File;
	Show_File.open("E:\\CNTT3\\QuanLyCafe\\Staff.txt");
	Node<Data> *P = head;
	Show_File << setw(20) << "DANH SACH THONG TIN NHAN VIEN" << endl;
	Show_File << setw(20) << "ID" << setw(20) << "FullName" << setw(20) << "Age" << setw(20) << "Phone" << setw(20) << "Salary" << endl;
	Show_File << "--------------------------------------------------------------------------------------------------------------" << endl;
	while (P != tail->getRight())
	{
		Show_File << P->getData();
		P = P->getRight();
	}
	cout << endl;
}

template <class Data>
void List<Data>::SortList()
{
	Node<Data> *P = head;
	for (Node<Data> *phead1 = head; phead1 != NULL; phead1 = phead1->getRight())
	{
		for (Node<Data> *phead2 = head->getRight(); phead2 != NULL; phead2 = phead2->getRight())
		{
			if (phead1->getData().Get_ID() > phead2->getData().Get_ID())
			{
				Node<Data> *temp;
				// temp->setData(phead1->getData());
				// temp->setLeft(phead1->getLeft());
				// temp->setRight(phead1->getRight());

				// phead1->setData(phead2->getData()) ;
				// phead1->setLeft(phead2->getLeft()) ;
				// phead1->setRight(phead2->getRight()) ;

				// phead2->setData(temp->getData())  ;
				// phead2->setLeft(temp->getLeft()) ;
				// phead2->setRight(temp->getRight())  ;

				temp = phead1;
				phead1 = phead2;
				phead2 = temp;
				// phead1->getData().Output();
				// phead2->getData().Output();
			}
		}
	}
}

// g++  List.cpp Staff.cpp Food.cpp FoodCategory.cpp main.cpp -o demo