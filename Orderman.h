#include <iostream>
#include "Order.h"
using namespace std;
class Orderman
{
private:
    List<Order> l_Order;
    List<Food> l_menu;

public:
    Orderman(/* args */){};
    ~Orderman(){};
    void loadmenu(const List<Food> &);
    void input();
    void output();
};