#include "List.h"
#include<iostream>
#include<iomanip>
using namespace std;
template<class Data>
List<Data>::List()
{
    this->head = NULL;
    this->tail = NULL;
}
template<class Data>
int List<Data>::isEmpty()
{
	return (head == NULL);
}

template<class Data>
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
		tail->setRight(P); //ket noi voi danh sach
		P->setLeft(tail);  //P tro ve node ben trai
		tail = P;		   //luu lai vi tri cuoi
	}
}
template<class Data>
Node<Data> *List<Data>::Search(int IDData)
{
	Node<Data> *P = head;
	while (P != NULL && P->getData().Get_ID() != IDData) //duyet danh sach den khi tim thay hoac den khi het danh sach
	{
		P = P->getRight();
	}
	if (P != NULL)
	{
		P->getData().Output(); //tra ve vi tri tim thay
	}
	else
		cout << "KHONG TIM THAY! "; //khong tim thay
	return P;
}

template<class Data>
void List<Data>::Delete_Node(int IDData)
{
	Node <Data> *temp = Search(IDData);
	if (head == temp)
		head = temp->getRight();
	if (temp->getRight() != NULL)
		temp->getRight()->setLeft(temp->getLeft());
	if (temp->getLeft() != NULL)
		temp->getLeft()->setRight(temp->getRight());
	if (tail == temp)
		tail = temp->getLeft();
}
template<class Data>
void List<Data>::Update(int IDData)
{
	Node<Data> *P = Search(IDData);
	Data s;
	cout << "\n\t----------CAP NHAT THONG TIN Data----------"<< endl;
	s.Input();
	P->setData(s);
}
template<class Data>
void List<Data>::Input()
{
	int i = 1;
	Data s;
	do
	{
		cout <<setw(20)<<"----------THEM Data---------" << endl;
		s.Input();
		if (i != 0)
			Insert(s);
		cout << "Tiep tuc? (1.Yes 0.No): ";
		cin >> i;
		cout<<endl;
	} while (i != 0); //nhap 0 de ket thuc

}
template<class Data>
void List<Data>::Show()
{
	Node<Data> *P = head;
	cout<<setw(20)<<"ID"<<setw(20)<<"NameData"<<setw(20)<<"Prices"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
	while (P != tail->getRight())
	{
		P->getData().Output();
		P = P->getRight();
	}
	cout << endl;
}
