#include"Staff.h"
#include<iostream>
#include<iomanip>
using namespace std;
Staff::Staff(int IDStaff, string FullName, int Age, string Numberphone, string Salary)
{
    this->IDStaff = IDStaff;
    this->FullName = FullName;
    this->Age = Age;
    this->Numberphone = Numberphone;
    this->Salary = Salary;
}

Staff::~Staff()
{
}

int Staff::Get_ID()
{
    return this->IDStaff;
}
void Staff::Set_IDStaff(int IDStaff)
{
    this->IDStaff = IDStaff;
}
void Staff::Input()
{
    cout << "ID : ";
    cin >> this->IDStaff;
    cout << "FullName : ";
    fflush(stdin);
    getline(cin, this->FullName);
    cout << "Age : ";
    cin >> this->Age;
    cout << "Phone : ";
    fflush(stdin);
    getline(cin, this->Numberphone);
    cout << "Salary: ";
    fflush(stdin);
    getline(cin, this->Salary);
    cout << endl;
}

// void Staff::Input()
// {
//     fstream fStaff;
//     fStaff.open("E:\\CNTT3\\QuanLyCafe\\Staff.txt");
//     cout << "ID : ";
//     cin >> this->IDStaff;
//     fStaff<<this->IDStaff;
//     cout<<endl;

//     cout << "FullName : ";
//     fflush(stdin);
//     getline(cin, this->FullName);
//     fStaff<<this->FullName;
//     cout<<endl;

//     cout << "Age : ";
//     cin >> this->Age;
//     fStaff<<this->Age;
//     cout<<endl;

//     cout << "Phone : ";
//     fflush(stdin);
//     getline(cin, this->Numberphone);
//     fStaff<<this->Numberphone;
//     cout<<endl;
    
//     cout << "Salary: ";
//     fflush(stdin);
//     getline(cin, this->Salary);
//     fStaff<<this->Salary;
//     cout<<endl;
// }
void Staff::Output()
{
    cout << setw(20) << this->IDStaff << setw(20)
         << this->FullName << setw(20) << this->Age << setw(20)
         << this->Numberphone << setw(20) << this->Salary << endl;
}

istream &operator>>(istream &in, Staff &s)
{
    cout << "ID : ";
    in >> s.IDStaff;
    cout << "FullName : ";
    fflush(stdin);
    getline(in, s.FullName);
    cout << "Age : ";
    in >> s.Age;
    cout << "Phone : ";
    in >> s.Numberphone;
    cout << "Salary: ";
    in>>s.Salary;
    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out,const Staff& s)
{
    out << setw(20) << s.IDStaff << setw(20)
        << s.FullName << setw(20) << s.Age << setw(20)
        << s.Numberphone << setw(20) << s.Salary << endl;
    return out;
}

bool Staff::operator!=(Staff &s)
{
    if (this->IDStaff != s.IDStaff)
    {
        return true;
    }
    return false;
}

// void Staff::operator=(Staff &s)
// {
//     this->IDStaff = s.IDStaff;
//     this->FullName = s.FullName;
//     this->Age = s.Age;
//     this->Numberphone = s.Numberphone;
//     this->Salary = s.Salary;
// }
