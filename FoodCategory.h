#include<iostream>
using namespace std;
class FoodCategory
{  
      private:
        int IDCate;
        string NameCate;

    public:
        FoodCategory();
        FoodCategory(int,string);
        ~FoodCategory();

        int Get_IDCate();
};