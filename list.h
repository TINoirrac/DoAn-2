#include "node.cpp"
#include <iostream>
using namespace std;
template <class data>
class list
{
    node<data> *head;
    node<data> *tail;

public:
    list();
    void input();
    void output();
    void inserttail(data);
    node<data> *search(int);
    void deletenode(int);
    void update(int);
};