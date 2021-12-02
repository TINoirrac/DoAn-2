#include "Node.cpp"
template<class Data>
class List
{
    Node<Data> *head;
    Node<Data> *tail;

public:
    List();
    int isEmpty();
    void Input();
    void Show();
    void Show_file();
    void Insert(Data);
    Node<Data> *Search(int); 
    void Delete_Node(int); 
    void Update(int);
    void SortList();
}; 