#include "Orderman.h"
void Orderman::loadmenu(const List<Food> &l_menu)
{
    this->l_menu = l_menu;
}
void Orderman::input()
{
    int i = 1, IDOrder;
    Order o;
    do
    {
        cout << "IDOrder: ";
        cin >> IDOrder;
        o.Set_IDOrder(IDOrder);
        o.select_food(this->l_menu);
        this->l_Order.Insert(o);
        cout << "Tiep tuc? (1.Yes 0.No): ";
        cin >> i;
    } while (i != 0);
}
void Orderman::output()
{
    Node<Order> *P = this->l_Order.get_head();
    while (P != this->l_Order.get_tail()->getRight())
    {
        cout << "IDOrder: " << P->getData().Get_ID() << endl;
        cout << "Cac mon da chon:" << endl;
        P->getData().output();
        P = P->getRight();
    }
}