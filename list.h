#include "Node.cpp"
template <class Data>
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
    Node<Data> *get_head();
    Node<Data> *get_tail();
    Node<Data> *Search(int);
    void Delete_Node(int);
    void Update(int);
<<<<<<< HEAD
    void SortList();
}; 
=======
    // void SortList();
};
>>>>>>> c7f576e8eb916ee8fe4daddd578b1554837c02a2
