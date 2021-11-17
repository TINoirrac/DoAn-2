#include "Food.h"
#include<iomanip>
#include <string>
Food::Food(int ID , string NameFood, string Prices)
{
	this->ID         = ID;
    this->NameFood   = NameFood;
	this->Prices      = Prices;
    
}
Food::~Food()
{
}
int Food::Get_ID()
{
	return this->ID;
}
istream& operator>>(istream& in,Food& f)
{
	cout << "ID: ";
	in>>f.ID;
    cout << "FoodCategory Name : ";
	in>>f.NameFood;
    cout << "Prices : ";
	in>>f.Prices;
	cout<<endl;
	return in;
}
ostream& operator<<(ostream& out, const Food& f)
{
	out<<setw(20)<<f.ID<<setw(20)<<
	f.NameFood<<setw(20)<<f.Prices<<endl;
	return out;
}

void Food::Input()
{
    cout << "ID : ";
    cin >> this->ID;
    cout << "Food's Name: ";
    fflush(stdin);
    getline(cin, this->NameFood);
    cout << "Price : ";
    cin >> this->Prices;
}
void Food::Output()
{
    cout<<setw(20)<<this->ID<<setw(20)
    <<this->NameFood<<setw(20)<<this->Prices<<setw(20)<<endl;
}

