#include <iostream>
#include <iomanip>
#include "Menu.h"
#include <fstream>
#include "Staff.h"
#include "Orderlist.h"
using namespace std;
// g++  List.cpp Staff.cpp Food.cpp  Order.cpp Orderman.cpp  main.cpp -o demo
int main()
{

       fstream Staff_file, Food_file, Order_file;
       Staff_file.open("E:\\CNTT3\\QuanLyCafe\\Staff.txt");
       Food_file.open("E:\\CNTT3\\QuanLyCafe\\Food.txt");
       Order_file.open("E:\\CNTT3\\QuanLyCafe\\Order.txt");
       Menu m;
       m.printTitle();
       int choice;
       int choice__Staff, choice_Food, choice_Order;
       int ID_Staff, ID_Food, ID_Order;
       List<Staff> l_Staff;
       List<Food> l_Food;
       Orderlist l_Order;
       do
       {
              m.printMenu();
              cin >> choice;
              switch (choice)
              {
              case 1:
                     do
                     {
                            m.printMenuStaff();
                            cin >> choice__Staff;
                            switch (choice__Staff)
                            {
                            case 1:
                                   cout << "\nNHAP THONG TIN NHAN VIEN" << endl;
                                   l_Staff.Input();
                                   break;
                            case 2:
                                   cout << "\nTHONG TIN NHAN VIEN" << endl;
                                   cout << setw(20) << "ID" << setw(20) << "FullName" << setw(20) << "Age" << setw(20) << "Phone" << setw(20) << "Salary" << endl;
                                   l_Staff.Show();
                                   break;
                            case 3:
                                   cout << "\nXOA THONG TIN NHAN VIEN THEO ID" << endl;
                                   cout << "ID: ";
                                   cin >> ID_Staff;
                                   l_Staff.Delete_Node(ID_Staff);
                                   break;
                            case 4:
                                   cout << "\nCAP NHAT THONG TIN NHAN VIEN THEO ID" << endl;
                                   cout << "ID : ";
                                   cin >> ID_Staff;
                                   l_Staff.Update(ID_Staff);
                                   break;
                            case 5:
                                   cout << "\nTIM KIEM THONG TIN NHAN VIEN THEO ID" << endl;
                                   cout << "ID : ";
                                   cin >> ID_Staff;
                                   l_Staff.Search(ID_Staff);
                                   break;
                            case 6:
                                   l_Staff.Staff_F();
                                   break;
                            default:
                                   break;
                            }
                     } while (choice__Staff != 0);
                     break;
                     // THUC DON
              case 2:
                     do
                     {
                            m.printMenuFood();
                            cin >> choice_Food;
                            switch (choice_Food)
                            {
                            case 1:
                                   cout << "\nTHONG TIN THUC DON" << endl;
                                   cout << setw(20) << "ID choice_Foodgory" << setw(20) << "Choice_Foodgory's Name" << endl;
                                   l_Food.Show();
                                   break;
                            case 2:
                                   cout << "\nNHAP THONG TIN THUC DON" << endl;
                                   l_Food.Input();
                                   break;
                            case 3:
                                   cout << "\nXOA THONG TIN THUC DON THEO ID" << endl;
                                   cout << "ID : ";
                                   cin >> ID_Food;
                                   l_Food.Delete_Node(ID_Food);
                                   break;
                            case 4:
                                   cout << "\nCAP NHAT THONG TIN THUC DON THEO ID" << endl;
                                   cout << "ID : ";
                                   cin >> ID_Food;
                                   l_Food.Update(ID_Food);
                                   break;
                            case 5:
                                   cout << "\nTIM KIEM THONG TIN THUC DON THEO ID" << endl;
                                   cout << "ID : ";
                                   cin >> ID_Food;
                                   l_Food.Search(ID_Food);
                                   break;
                            case 6:
                                   l_Food.Food_F();
                                   break;
                            default:
                                   break;
                            }
                     } while (choice_Food != 0);
                     break;
                     // ORDER
              case 3:
                     do
                     {
                            m.printMenuOrder();
                            cin >> choice_Order;
                            switch (choice_Order)
                            {
                            case 1:
                                   cout << "\tTHONG TIN DON DAT HANG" << endl;
                                   cout << setw(20) << "ID" << setw(20) << "FullName" << setw(20) << "Age" << setw(20) << "Phone" << setw(20) << "Salary" << endl;
                                   l_Order.output();
                                   break;
                            case 2:
                                   l_Order.loadmenu(l_Food);
                                   cout << "\tNHAP THONG TIN DON DAT HANG" << endl;
                                   l_Order.input();
                                   break;
                            case 3:
                                   cout << "\nXOA THONG TIN DON DAT HANG THEO ID" << endl;
                                   cout << "Nhap ID DON DAT HANG can xoa : ";
                                   cin >> ID_Order;
                                   l_Order.delete_order(ID_Order);
                                   break;
                            case 4:
                                   cout << "\nCAP NHAT THONG TIN DON DAT HANG THEO MA ID" << endl;
                                   cout << "Nhap ID DON DAT HANG can cap nhat : ";
                                   cin >> ID_Order;
                                   l_Order.update_order(ID_Order);
                                   break;
                            case 5:
                                   cout << "\nTIM KIEM THONG TIN DON DAT HANG THEO MA DON DAT HANG" << endl;
                                   cout << "Nhap ID DON DAT HANG can tim kiem : ";
                                   cin >> ID_Order;
                                   l_Order.search_order(ID_Order);
                                   break;
                            case 6:
                                   l_Order.Order_F();
                                   break;
                            default:
                                   break;
                            }
                     } while (choice_Order != 0);
                     break;
              }
       } while (choice != 0);
}