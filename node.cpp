#include "Node.h"
template <class Data>
Node<Data>::Node(Data info)
{
    this->info = info;
    this->right = NULL;
    this->left = NULL;
}
template <class Data>
Node<Data>::Node(Data info, Node *right, Node *left)
{
    this->info = info;
    this->right = right;
    this->left = left;
}
template <class Data>
Data Node<Data>::getData()
{
    return this->info;
}
template <class Data>
void Node<Data>::setData(Data s)
{
    this->info = s;
}
template <class Data>
Node<Data> *Node<Data>::getRight()
{
    return this->right;
}
template <class Data>
void Node<Data>::setRight(Node *right)
{
    this->right = right;
}
template <class Data>
Node<Data> *Node<Data>::getLeft()
{
    return this->left;
}
template <class Data>
void Node<Data>::setLeft(Node *left)
{
    this->left = left;
}
// template <class Data>
// void Node<Data>::operator=(Node *p)
// {
//     this->getData() = p->getData();
// }