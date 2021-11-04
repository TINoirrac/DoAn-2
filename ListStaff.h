#include"Staff.h"
class Node{
    private:
        Staff data;
        Node* left;
        Node* right;
    public:
        Node(Staff s);
        Node(Staff data, Node* left, Node* right);
        void setData(Staff s);
        void setLeft(Node* x);
        void setRight(Node* x);
        Staff getData();
        Node* getLeft();
        Node* getRight();
        Node* makeNode(Staff s); //tao 1 Node chua thong tin la s
};

class ListStaff
{
	Node* head;
	Node* tail;
public:
	ListStaff();
	int isEmpty(); //kiem tra danh sach rong
	int length(); //do dai danh sach
    void Input();
	void Show();
	void Insert(Staff  s); //chen them 1 staff vao cuoi danh sach


	Node* Search(int); //tim staff x trong danh sach
    // void Search(int);

	void Delete_k(int ); //xoa 1 staff tai vi tri k trong danh sach
	void Delete_IDStaff(int ); //xoa 1 staff trong danh sach
    void Update(int IDStaff);
	
	
};