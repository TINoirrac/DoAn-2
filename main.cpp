#include <iostream>
#include<iomanip>
#include"Menu.h"
#include"Staff.h"
#include"Order.h"
using namespace std;
// g++  List.cpp Staff.cpp Food.cpp  Order.cpp main.cpp -o demo
int main()
{

   Menu m;
        m.printTitle();
       int choice;
       int choice__Staff,choice_Food,choice_Order;
       int ID_Staff,ID_Food,ID_Order;
       List<Staff> l_Staff ;
       List<Food> l_Food;
       List<Order> l_Order;
   do{
       m.printMenu();
       cin>>choice;
       switch (choice)
       {
              case 1:
              do{
                     m.printMenuStaff();
                     cin>>choice__Staff;
                     switch (choice__Staff)
                                   {
                                   case 1:
                                          cout<<"\tTHONG TIN NHAN VIEN"<<endl;
                                          cout <<setw(20)<<"ID"<<setw(20)<<"FullName"<<setw(20)<<"Age"<<setw(20)<<"Phone"<<setw(20)<<"Salary"<<endl;
                                          l_Staff.Show();
                                          break;
                                   case 2:
                                          cout<<"\tNHAP THONG TIN NHAN VIEN"<<endl;
                                          l_Staff.Input();
                                          break;
                                   case 3:
                                          cout<<"\tXOA THONG TIN NHAN VIEN THEO ID"<<endl;
                                          cout<<"Nhap ID nhan vien can xoa : ";
                                          cin>>ID_Staff;
                                          l_Staff.Delete_Node(ID_Staff);
                                          break;
                                   case 4:
                                          cout<<"\tCAP NHAT THONG TIN NHAN VIEN THEO ID"<<endl;
                                          cout<<"Nhap ID nhan vien can cap nhat : ";
                                          cin>>ID_Staff;
                                          l_Staff.Update(ID_Staff);
                                          break;
                                   case 5:
                                          cout<<"\tTIM KIEM THONG TIN NHAN VIEN THEO ID"<<endl;
                                          cout<<"Nhap ID nhan vien can tim kiem : ";
                                          cin>>ID_Staff;
                                          l_Staff.Search(ID_Staff);
                                          break;
                                   // case 6:
                                   //        cout<<"\tSAP XEP THONG TIN CUA NHAN VIEN THEO ID"<<endl;
                                   //        l_Staff.SortList();
                                   //        break;
                                   default:
                                   break;
                                   }
              }while(choice__Staff!=0);
                     break;
       //THUC DON
              case 2:
              do{
                     m.printMenuFood();
                     cin>>choice_Food;
                     switch (choice_Food)
                                   {
                                   case 1:
                                          cout<<"\tTHONG TIN THUC DON"<<endl;
                                          cout <<setw(20)<<"ID choice_Foodgory"<<setw(20)<<"choice_Foodgory's Name"<<setw(20)<<endl;
                                          l_Food.Show();
                                          break;
                                   case 2:
                                          cout<<"\tNHAP THONG TIN THUC DON"<<endl;
                                          l_Food.Input();
                                          break;
                                   case 3:
                                          cout<<"\tXOA THONG TIN THUC DON THEO ID"<<endl;
                                          cout<<"Nhap ID thuc don can xoa : ";
                                          cin>>ID_Food;
                                          l_Food.Delete_Node(ID_Food);
                                          break;
                                   case 4:
                                          cout<<"\tCAP NHAT THONG TIN THUC DON THEO ID"<<endl;
                                          cout<<"Nhap ID thuc don can cap nhat : ";
                                          cin>>ID_Food;
                                          l_Food.Update(ID_Food);
                                          break;
                                   case 5:
                                          cout<<"\tTIM KIEM THONG TIN THUC DON THEO ID"<<endl;
                                          cout<<"Nhap ID thuc don can tim kiem : ";
                                          cin>>ID_Food;
                                          l_Food.Search(ID_Food);
                                          break;
                                   default:
                                   break;
                                   }
              }while(choice_Food!=0);
                     break;
       //FOOD
               case 3:
              do{
                     m.printMenuOrder();
                     cin>>choice_Order;
                     switch (choice_Order)
                                   {
                                   case 1:
                                          cout<<"\tTHONG TIN DON DAT HANG"<<endl;
                                          cout <<setw(20)<<"ID"<<setw(20)<<"FullName"<<setw(20)<<"Age"<<setw(20)<<"Phone"<<setw(20)<<"Salary"<<endl;
                                          l_Order.Show();
                                          break;
                                   case 2:
                                          cout<<"\tNHAP THONG TIN DON DAT HANG"<<endl;
                                          l_Order.Input();
                                          break;
                                   case 3:
                                          cout<<"\tXOA THONG TIN DON DAT HANG THEO ID"<<endl;
                                          cout<<"Nhap ID DON DAT HANG can xoa : ";
                                          cin>>ID_Order;
                                          l_Order.Delete_Node(ID_Order);
                                          break;
                                   case 4:
                                          cout<<"\tCAP NHAT THONG TIN DON DAT HANG THEO MA ID"<<endl;
                                          cout<<"Nhap ID DON DAT HANG can cap nhat : ";
                                          cin>>ID_Order;
                                          l_Order.Update(ID_Order);
                                          break;
                                   case 5:
                                          cout<<"\tTIM KIEM THONG TIN DON DAT HANG THEO MA DON DAT HANG"<<endl;
                                          cout<<"Nhap ID DON DAT HANG can tim kiem : ";
                                          cin>>ID_Order;
                                          l_Order.Search(ID_Order);
                                          break;
                                   default:
                                   break;
                                   }
              }while(choice_Order!=0);
                     break;
       }
   }while(choice !=0);
}