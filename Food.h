#pragma once
#include <iostream>
#include<string>
using namespace std;
class Food 
{
    private:
        int ID;
        string NameFood;
        float Price;
    public:
        Food(int = 0 , string =" ",float= 0);
        ~Food();
        void Input();
        void Output(); 
        int Get_ID();
        friend ostream& operator<<(ostream& ,const Food& f);
        friend istream& operator>>(istream&,Food& f );
};