#include "Order.h"
Order::Order()
{
}
Order::Order(int ID, int quantity, float total)
    : ID(ID), quantity(quantity), total(total)
{
}
Order::Order(const Order &o)
{
    this->ID = o.ID;
    this->quantity = o.quantity;
    this->l_food = o.l_food;
    this->total = o.total;
}
Order::~Order() {}
int Order::Get_ID()
{
    return this->ID;
}
void Order::Set_IDOrder(int ID)
{
    this->ID = ID;
}
ostream &operator<<(ostream &cout, const Order &o)
{
    cout << "ID: " << o.ID << endl;
    cout << "Cac mon da chon:" << endl;
    cout << o.l_food << endl;
    cout << "Tong gia:" << o.total << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    return cout;
}
istream &operator>>(istream &cin, Order &o)
{
    cout << "IDFood: ";
    cin >> o.ID;
    return cin;
}
void Order::select_food(List<Food> l_menu)
{
    int i, n, IDFood;
    this->total = 0;
    Node<Food> *temp;
    do
    {
        cout << "Chon mon(ID): ";
        cin >> IDFood;
        temp = l_menu.Search(IDFood);
        if (temp != NULL)
        {
            total += temp->getData().Get_Price();
            this->l_food.Insert(temp->getData());
        }
        else
            this->l_food.Insert(Food());
        cout << "Tiep tuc chon mon? (1.Yes 0.No): ";
        cin >> i;
    } while (i != 0);
}