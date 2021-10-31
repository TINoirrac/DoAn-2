#include"Staff.h"
#include"ListStaff.h"
#include<iostream>

using namespace std;

Node::Node(Staff s)
{
	data = s;
	left = NULL;
	right = NULL;
}

Node::Node(Staff data, Node* left, Node* right)
{
	this->data = data;
	this->left = left;
	this->right = right;
}
void Node::setData(Staff s) {data = s;}
void Node::setLeft(Node* s) {left = s;}
void Node::setRight(Node* s) {right = s;}
Staff Node::getData() {return data;}
Node* Node::getLeft() {return left;}
Node* Node::getRight() {return right;}

Node* Node::makeNode(Staff s) //tao Node P chua thong tin la s
{
	Node* P = new Node(s); //cap phat vung nho cho P
	P->setData(s); //ghi du lieu vao data
	P->setLeft(NULL);
	P->setRight(NULL);
	return P;
}
ListStaff::ListStaff()
{
	head = NULL;
	tail = NULL;
}
int ListStaff::isEmpty()
{
	return (head==NULL);
}

int ListStaff::length()
{
	Node* P_head = head; //tao node P_head la con tro duyet tu dau danh sach l
	Node* P_tail = tail; //tao node P_tail la con tro duyet tu cuoi danh sach l
	int i = 0; //bien dem
	if (P_head != NULL) i = 1;
	while (P_head != NULL) //trong khi P chua tro den NULL -> cuoi danh sach thi lam
	{
		if (P_head == P_tail) break;
		P_head = P_head->getRight(); //cho P_head tro den node tiep theo
		i++;
		if (P_head == P_tail) break;
		P_tail = P_tail->getLeft(); //cho P_tail tro den node truoc no
		i++;
	}
	return i; //tra ve so node cua danh sach l
}

void ListStaff::Insert(Staff s)
{
	Node* P = new Node(s, NULL, NULL);
	P->makeNode(s);
	if (isEmpty())
	{
		head = P;
		tail = P;
	}
	else
	{
		tail->setRight(P); //ket noi voi danh sach
		P->setLeft(tail); //P tro ve node ben trai
		tail = P; //luu lai vi tri cuoi
	}
}
int ListStaff::Search(Staff s)
{
	
	Node* P = head;
	int i = 1;
	while (P != NULL && P->getData() != s) //duyet danh sach den khi tim thay hoac den khi het danh sach
	{
		P = P->getRight();
		i++;
	}
	if (P != NULL) return i; //tra ve vi tri tim thay
	return 0; //khong tim thay
}


void ListStaff::Delete_k(Staff& s, int k)
{
	Node* P_head = head;
	Node* P_tail = tail;
	int i = 1;
	int l = length();
	if (k<1 || k>l)
		cout << "Vi tri xoa khong hop le!";
	else
	{
		if (!isEmpty())
		{
			if (k == 1) //xoa vi tri dau tien
			{
				s = head->getData(); //lay gia tri ra neu can dung
				head = head->getRight(); //cho l tro den node thu hai trong danh sach
			}
			if (k == l) //xoa vi tri cuoi
			{
				s = tail->getData();
				tail = tail->getLeft();
				tail->setRight(NULL);
			}
			else //xoa vi tri 1 < k < l
			{
				while (P_head != NULL && i != k - 1) //duyet den vi tri k-1
				{
					i++;
					P_head = P_head->getRight();
				}
				P_head->setRight(P_tail);
				P_tail->setLeft(P_head);
			}
		}
	}
}
void ListStaff::Delete(Staff s)
{
	int k = Search(s);
	while (k)
	{
		Delete_k(s, k); //trong khi van tim thay x thi van xoa
		k = Search(s);
	}
}


void ListStaff::Input()
{
	int i = 1;
	Staff s;
	do 
	{
		cout << "Them 1 nhan vien:" << endl;
		s.Input();
		if (i != 0) Insert(s);
		cout << "Tiep tuc nhap nua khong? (1.Yes 0.No): ";
		cin >> i;
	} while (i != 0); //nhap 0 de ket thuc
}

void ListStaff::Show()
{
	Node* P = head;
	while (P != tail->getRight())
	{
		P->getData().Output();
		P = P->getRight();
	}
	cout << endl;
}