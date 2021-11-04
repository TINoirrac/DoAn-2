#include"Staff.h"
#include<string>
#include<iomanip>
Staff::Staff()
{

}

Staff::Staff(int IDStaff,string FullName,int Age,string Numberphone,float Salary)
{
    this->Number=Number;
    this->IDStaff = IDStaff;
    this->FullName = FullName;
    this->Age = Age;
    this->Numberphone = Numberphone;
    this->Salary = Salary;
}   

Staff::~Staff()
{

}

int Staff::Get_IDStaff()
{
    return this->IDStaff;
}
int Staff::Get_Number()
{
    return this->Number;
}
void Staff::Input()
{

    cout<<"Nhap ma nhan vien : ";
    cin>>this->IDStaff;
    cout<<"Nhap ho va ten nhan vien : ";
    fflush(stdin);
    getline(cin,this->FullName);
    cout<<"Nhap tuoi cua nhan vien : ";
    cin>>this->Age;
    cout<<"Nhap so dien thoai cua nhan vien : ";
    fflush(stdin);
    getline(cin,this->Numberphone);
    cout<<"Nhap luong cua nhan vien : ";
    cin>>this->Salary;
    Number++;
}

void Staff::Output()
{
    cout<<"----------Thong tin nhan vien----------"<<endl;
    cout<<"STT : "<<this->Number<<endl;
    cout<<"Ma : "<<this->IDStaff<<endl;
    cout<<"Ho va ten : "<<this->FullName<<endl;
    cout<<"Tuoi : "<<this->Age<<endl;
    cout<<"So dien thoai : "<<this->Numberphone<<endl;
    cout<<"Luong : "<<this->Salary<<endl;
}

bool Staff::operator!=(Staff& s)
{
    if(this->IDStaff != s.IDStaff)
    {
        return true;
    }
    return false;
}