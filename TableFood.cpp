#include "TableFood.h"
#include <iostream>
using namespace std;

TableFood::TableFood()
{
    this->ID         = 0;
}
TableFood::~TableFood()
{
    this->ID         = 0;
}
void TableFood::Status()
{
    int so;
    cout << "----Status Table---- " << endl;
    cout << "      Nhap ID Ban   " << endl;
    cout << "  1. Co nguoi dat  " << endl;
    cout << "  2. Chua co nguoi dat  " << endl;
    cout << "-------------------------" << endl;
    do 
    {
       cout << "Nhap ID Ban: ";
       cin >> this->ID;
       cout << "Chon tinh trang: ";
       cin >> so;
       switch (so)
       {
       case 1:
            cout << "Co nguoi dat" << endl;
           break;
       case 2:
            cout << "Chua co nguoi dat" << endl;
            break;    
       default:
            cout << "vui long chon tinh trang cua ban" << endl;
       }
    } while (so <= 3);
}