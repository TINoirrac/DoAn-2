#include "node.h"
template <class data>
node<data>::node(data info)
{
    this->info = info;
    this->next = NULL;
    this->prev = NULL;
}
template <class data>
node<data>::node(data info, node *next, node *prev)
{
    this->info = info;
    this->next = next;
    this->prev = prev;
}
template <class data>
data node<data>::get_info()
{
    return this->info;
}
template <class data>
void node<data>::set_info(data s)
{
    this->info = s;
}
template <class data>
node<data> *node<data>::get_next()
{
    return this->next;
}
template <class data>
void node<data>::set_next(node *next)
{
    this->next = next;
}
template <class data>
node<data> *node<data>::get_prev()
{
    return this->prev;
}
template <class data>
void node<data>::set_prev(node *prev)
{
    this->prev = prev;
}