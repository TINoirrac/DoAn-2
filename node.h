#pragma once
#include <iostream>
using namespace std;
template <class Data>
class Node
{
private:
    Data info;
    Node *left;
    Node *right;

public:
    Node(Data s);
    Node(Data info, Node *left, Node *right);
    ~Node();
    void setData(Data);
    void setLeft(Node *);
    void setRight(Node *);
    Data getData();
    Node *getLeft();
    Node *getRight();
    // void operator=(Node*);
    // Node *makeNode(Data s); //tao 1 Node chua thong tin la s
};