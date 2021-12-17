#include <iostream>
#include "Food.h"
#include "list.cpp"
#include <string>
using namespace std;
class Order
{
    int ID;
    int quantity;
    List<Food> l_food;
    float total;

public:
    Order();
    Order(int, int, float);
    Order(const Order &);
    ~Order();
    friend ostream &operator<<(ostream &, const Order &);
    friend istream &operator>>(istream &, Order &);
    int Get_ID();
    void Set_IDOrder(int);
    float get_total();
    void set_total(float);
    void select_food(List<Food>);
    friend class Food;
};