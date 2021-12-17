#pragma once
#include <iostream>
#include <string>
using namespace std;
class Staff
{
protected:
    int ID;
    string FullName;
    int Age;
    string Numberphone;
    string Salary;

public:
    Staff(int = 0, string = "", int = 0, string = "", string = "");
    ~Staff();
    int Get_ID();
    void Set_IDStaff(int);
    void Input();
    void Output();
    friend ostream &operator<<(ostream &, const Staff &s);
    friend istream &operator>>(istream &, Staff &s);
    // void operator=(Staff& s);
    bool operator!=(Staff &s);
};