#include <iostream>
using namespace std;
template <class data>
class node
{
    data info;
    node *next;
    node *prev;

public:
    node(data);
    node(data, node *, node *);
    data get_info();
    void set_info(data);
    node *get_next();
    void set_next(node *);
    node *get_prev();
    void set_prev(node *);
};