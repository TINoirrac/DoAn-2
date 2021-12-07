#include <iostream>
#include "Order.h"
using namespace std;
class Orderlist
{
private:
    List<Order> l_Order;
    List<Food> l_menu;

public:
    Orderlist(/* args */){};
    ~Orderlist(){};
    void loadmenu(const List<Food> &);
    void delete_order(int);
    void search_order(int);
    void update_order(int);
    void input();
    void output();
};