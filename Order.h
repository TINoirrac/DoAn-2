#include <iostream>
#include "Food.h"
#include "list.cpp"
#include <string>
#include "date.h"
using namespace std;
class Order
{
    int IDOrder;
    int quantity;
    List<Food> l_food;
    float total;
    date datecheckin;
    date datecheckout;

public:
    Order();
    Order(int, int, float, date, date);
    Order(const Order &);
    ~Order();
    friend ostream &operator<<(ostream &, const Order &);
    friend istream &operator>>(istream &, Order &);
    int Get_ID();
    void Set_IDOrder(int);
    float get_total();
    void set_total(float);
    void select_food(List<Food>);
    void output();
    void input();
    // friend class Food;
};