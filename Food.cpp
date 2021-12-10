#include "Food.h"
#include <iomanip>
#include <string>
Food::Food(int ID, string NameFood, float Price)
{
    this->ID = ID;
    this->NameFood = NameFood;
    this->Price = Price;
}
Food::~Food()
{
}
int Food::Get_ID()
{
    return this->ID;
}
float Food::Get_Price()
{
    return this->Price;
}
istream &operator>>(istream &in, Food &f)
{
    cout << "ID: ";
    in >> f.ID;
    cout << "Food's Name : ";
    fflush(stdin);
    getline(in, f.NameFood);
    cout << "Price : ";
    in >> f.Price;
    cout << endl;
    return in;
}
ostream &operator<<(ostream &cout, const Food &f)
{
    cout << setw(20) << f.ID << setw(20) << f.NameFood << setw(20) << f.Price << endl;
    return cout;
}
void Food::Input()
{
    cout << "ID : ";
    cin >> this->ID;
    cout << "Food's Name: ";
    fflush(stdin);
    getline(cin, this->NameFood);
    cout << "Price : ";
    cin >> this->Price;
}
void Food::Output()
{
    cout << setw(20) << this->ID << setw(20)
         << this->NameFood << setw(20) << this->Price << setw(20) << endl;
}
