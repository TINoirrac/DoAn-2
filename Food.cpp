#include "Food.h"
#include <iostream>
using namespace std;

Food::Food()
{
    this->NameFood   = "";
	this->ID         = 0;
	this->IDCategory = 0;
	this->price      = 0;
    
}
Food::~Food()
{
    this->NameFood   = "";
	this->ID         = 0;
	this->IDCategory = 0;
	this->price      = 0;
}
void Food::Set()
{
    cout << "Nhap ten thuc an: "; getline(cin, this->NameFood);
	cout << "Nhap ID: ";cin >> this->ID;
	cout << "Nhap ID Category: ";cin >> this->IDCategory;
    cout << "Nhap gia tien: ";cin >> this->price;   
}
void Food::Get()
{
    cout << "Ten thuc an: " << this->NameFood << endl;
	cout << "ID: " << this->ID << endl;
	cout << "ID Category: " << this->IDCategory << endl;
	cout << "Gia tien: " << this->price << endl;
}
