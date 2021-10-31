#include<iostream>
#include"ListStaff.h"
// g++ ListStaff.cpp Staff.cpp main.cpp -o demo
using namespace std;
int main(){
    ListStaff* l = new ListStaff();
    l->Input();
    l->Show();

    
    

}