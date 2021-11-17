#include"FoodCategory.h"
#include<string>
#include<iomanip>
FoodCategory::FoodCategory()
{

}

FoodCategory::FoodCategory(string IDCate, string NameCate)
    :IDCate(IDCate),NameCate(NameCate)
{

}

FoodCategory::~FoodCategory()
{

}

string FoodCategory::Get_IDCate()
{
    return this->IDCate;
}
istream& operator>>(istream& in,FoodCategory& f)
{
    cout << "Nhap ma thuc don : ";
    in >> f.IDCate;
    cout << "Nhap loai : ";
    in >> f.NameCate;
    return in;
}

ostream& operator<<(ostream& out,const FoodCategory& f)
{
   	out<<setw(20)<<f.IDCate<<setw(20)<<
	f.NameCate<<endl;
    return out;
}
