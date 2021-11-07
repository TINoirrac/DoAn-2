#pragma once
#include <iostream>
using namespace std;
class Staff
{
protected:
    int IDStaff;
    string FullName;
    int Age;
    string Numberphone;
    float Salary;

public:
    Staff();
    Staff(int, string, int, string, float);
    ~Staff();
    int Get_IDStaff();
    void Set_IDStaff(int);
    void Input();
    void Output();
    bool operator!=(Staff &s);
};