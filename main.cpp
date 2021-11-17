#include <iostream>
#include<iomanip>
#include"Menu.h"
#include"Staff.h"
#include"Food.h"
#include"List.cpp"
using namespace std;
// g++ List.cpp Staff.cpp Food.cpp main.cpp -o demo
int main()
{

//    Menu m;
//         m.printTitle();
//        int choice;
//        int choice__Staff;
//        int ID_Staff;
       Staff s;       
       List<Food> l_Staff ;
       l_Staff.Input();
       l_Staff.Show();
       int id;
       cout<<"Nhap id : ";
       cin>>id;
       l_Staff.Delete_Node(id);
       cout<<"Sau khi xoa"<<endl;
       l_Staff.Show();
//    do{
//        m.printMenu();
//        cin>>choice;
//        switch (choice)
//        {
//        case 1:
//            m.printMenuStaff();
//            cin>>choice__Staff;
//            switch (choice)
//            {
//            case 1:
//                 cout<<"\t THONG TIN NHAN VIEN"<<endl;
//                 cout <<setw(20)<<"ID"<<setw(20)<<"FullName"<<setw(20)<<"Age"<<setw(20)<<"Phone"<<setw(20)<<"Salary"<<endl;
//                 cout<<"\t========================================================"<<endl;
//                 l_Staff.output();
//                break;
//            case 2:
//                 cout<<"\t NHAP THONG TIN NHAN VIEN"<<endl;
//                 l_Staff.input();
//                 break;
//             // case 3:
//             //     cout<<"\tXOA THONG TIN NHAN VIEN THEO ID"<<endl;
//             //     cout<<"\tNhap ID nhan vien can xoa : ";
//             //     cin>>ID_Staff;
//             //     l_Staff.deletenode(ID_Staff);
//             //     break;
//             // case 4:
//             //     cout<<"\tCAP NHAT THONG TIN NHAN VIEN THEO MA ID"<<endl;
//             //     cout<<"\tNhap ID nhan vien can cap nhat : ";
//             //     cin>>ID_Staff;
//             //     l_Staff.update(ID_Staff);
//             //     break;
//             // case 5:
//             //     cout<<"\tTIM KIEM THONG TIN NHAN VIEN THEO MA NHAN VIEN"<<endl;
//             //     cout<<"\tNhap ID nhan vien can tim kiem : ";
//             //     cin>>ID_Staff;
//             //     l_Staff.search(ID_Staff);
//             case 0:
//                 m.printMenu();
//            }
//            break;
       
//        default:
//            break;
//        }
//    }while(choice !=0);
}