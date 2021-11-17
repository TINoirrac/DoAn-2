#pragma once
#include <iostream>
#include"FoodCategory.h"
using namespace std;
class Food 
{
    private:
        int ID;
        string NameFood;
        string Prices;
    public:
        Food(int = 0 , string =" ",string = " ");
        ~Food();
        void Input();
        void Output(); 
        int Get_ID();
        friend ostream& operator<<(ostream& ,const Food& f);
        friend istream& operator>>(istream&,Food& f );
};