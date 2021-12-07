#include "Orderlist.h"
void Orderlist::loadmenu(const List<Food> &l_menu)
{
    this->l_menu = l_menu;
    this->l_menu.Show();
}
void Orderlist::delete_order(int IDOrder)
{
    this->l_Order.Delete_Node(IDOrder);
}
void Orderlist::search_order(int IDOrder)
{
    this->l_Order.Search(IDOrder);
}
void Orderlist::update_order(int IDOrder)
{
    Node<Order> *P = this->l_Order.Search(IDOrder);
    Order o;
    cout << "\n\t---------THAY DOI THONG TIN ORDER----------" << endl;
    o.select_food(this->l_menu);
    P->setData(o);
}
void Orderlist::input()
{
    int i = 1, IDOrder;
    do
    {
        Order o;
        cout << "IDOrder: ";
        cin >> IDOrder;
        o.Set_IDOrder(IDOrder);
        o.select_food(this->l_menu);
        this->l_Order.Insert(o);
        cout << "Tiep tuc nhap Order? (1.Yes 0.No): ";
        cin >> i;
    } while (i != 0);
}
void Orderlist::output()
{
    Node<Order> *P = this->l_Order.get_head();
    while (P != this->l_Order.get_tail()->getRight())
    {
        cout << P->getData();
        P = P->getRight();
    }
}