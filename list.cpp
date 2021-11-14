#include "list.h"
template <class data>
list<data>::list()
{
    this->head = NULL;
    this->tail = NULL;
}
template <class data>
void list<data>::input()
{
    int i = 1, count = 1;
    data s;
    do
    {
        cout << " Them thong tin " << count << ":" << endl;
        cin >> s;
        if (i != 0)
            inserttail(s);
        cout << "Tiep tuc nhap nua khong? (1.Yes 0.No): ";
        cin >> i;
        count++;
    } while (i != 0); //nhap 0 de ket thuc
}
template <class data>
void list<data>::output()
{
    node<data> *p = head;
    cout << "\tthong tin nhan vien:\t\n";
    while (p != NULL)
    {
        cout << p->get_info() << endl;
        p = p->get_next();
    }
}
template <class data>
void list<data>::inserttail(data s)
{
    node<data> *p = new node<data>(s);
    if (this->head == NULL)
    {
        this->head = this->tail = p;
    }
    else
    {
        this->tail->set_next(p);
        p->set_prev(this->tail);
        this->tail = p;
    }
}
template <class data>
node<data> *list<data>::search(int iddata)
{
    node *p = head;
    while (p != head && p->get_info().get_idstaff() != iddata)
    {
        p = p->get_next();
    }
    if (p != NULL)
    {
        cout << "\tthong tin ID " << iddata << ": " << endl;
        cout << p->get_info();
        //return p;
    }
    else
        cout << "\tkhong tim thay thong tin ID" << iddata << "." << endl;
    return p;
}
template <class data>
void list<data>::deletenode(int iddata)
{
    node *p = search(iddata);
    if (this->head == p)
    {
        this->head = p->get_next();
    }
    if (p->get_next() != NULL)
    {
        p->get_next()->set_prev(p->get_prev());
    }
    if (p->get_prev() != NULL)
    {
        p->get_prev()->set_next(p->get_next());
    }
    if (this->tail == p)
    {
        this->tail = p->get_prev();
    }
}
template <class data>
void list<data>::update(int iddata)
{
    node *p = search(iddata);
    data s;
    cout << "\tnhap thong tin cap nhat cho ID " << iddata << ": " << endl;
    cin >> s;
    p->set_info(s);
}