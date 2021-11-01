#pragma once
#include<iostream>
using namespace std;
class Staff{
    private:
        int Number;
        int IDStaff;
        string FullName;
        int Age;
        string Numberphone;
        float Salary;

    public:
        Staff();
        Staff(int,string,int,string,float);
        ~Staff();

        int Get_IDStaff(); 

        void Input();
        void Output();
        bool operator!=(Staff& s);
};