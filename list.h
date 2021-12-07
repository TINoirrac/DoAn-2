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
    void SortList();
    template <class out>
    friend ostream &operator<<(ostream &, const List<out> &);
};
