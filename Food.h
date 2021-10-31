#include <iostream>
using namespace std;
class Food
{
    private:
        int ID, IDCategory;
        string NameFood;
        float price;
    public:
        Food();
        ~Food();
        void Set();
        void Get(); 
};