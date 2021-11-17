#include<iostream>
#pragma once
using namespace std;
class FoodCategory
{  
      private:
        string IDCate;
        string NameCate;

      public:
        FoodCategory();
        FoodCategory(string,string);
        ~FoodCategory();

        void Input();
        void Output();
        string Get_IDCate();
        friend ostream& operator<<(ostream&,const FoodCategory&);
        friend istream& operator>>(istream&,FoodCategory&);

};