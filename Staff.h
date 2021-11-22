#pragma once
#include <iostream>
#include<string>
using namespace std;
class Staff
{
protected:
    int IDStaff;
    string FullName;
    int Age;
    string Numberphone;
    string Salary;

public:
    Staff();
    Staff(int, string, int, string, string);
    ~Staff();
    int Get_ID();
    void Set_IDStaff(int);
    void Input();
    void Output();
    friend ostream& operator<<(ostream&, const Staff& s);
    friend istream& operator>>(istream&,Staff& s);
    void operator=(Staff& s);
    bool operator!=(Staff &s);
};