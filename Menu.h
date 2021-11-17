#include<iostream>
using namespace std;

class Menu{
    public:
        void printTitle()
	{
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "|      Dai hoc Bach Khoa - Dai hoc Da Nang - Khoa Cong Nghe Thong Tin         |" << endl;
		cout << "|                             Do an lap trinh                                 |" << endl;
		cout << "|                        De tai: Quan ly quan cafe                            |" << endl;
		cout << "|    Sinh vien thuc hien: LE HOANG , NGUYEN DUC QUOC , NGUYEN NHAT QUAN       |" << endl;
		cout << "|                          Nhom hoc phan: 20.13                               |" << endl;
		cout << "|                  Giang vien huong dan: TRUONG NGOC CHAU                     |" << endl;
		cout << "-------------------------------------------------------------------------------" << endl;
	}
    void printMenu()
	{
		cout << "----------------------------------------" << endl;
		cout << "|                  MENU                 |" << endl;
		cout << "|  1. Thao tac voi thong tin nhan vien  |" << endl;
		cout << "|  2. Thong tin dat ban                 |" << endl;
		cout << "|  3. Thong tin thuc don                |" << endl;
		cout << "|  4. Thong tin hoa don                 |" << endl;
		cout << "|  0. Ket thuc                          |" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
    void printMenuStaff()
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "|                       MENU STAFF                          |" << endl;
		cout << "|  1. Xem danh sach tat ca cac nhan vien                    |" << endl;
		cout << "|  2. Them 1 nhan vien vao cuoi danh sach                   |" << endl;
		cout << "|  3. Xoa 1 nhan vien theo ma nhan vien                     |" << endl;
		cout << "|  4. Cap nhat thong tin cua nhan vien theo ma nhan vien    |" << endl;
		cout << "|  5. Tim kiem thong tin cua nhan vien theo ma nhan vien    |" << endl;
		cout << "|  0. Quay lai menu truoc                                   |" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
    void printMenuFoodCategory()
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "|                       MENU THUC DON                       |" << endl;
		cout << "|  1. Xem danh sach tat ca cac mon an                       |" << endl;
		cout << "|  2. Tim kiem thong tin cua theo ma mon an               |" << endl;
		cout << "|  0. Quay lai menu truoc                                   |" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
   void printMenuSchedule()
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "|                      MENU SCHEDULE                        |" << endl;
		cout << "|  1. Xem trang thai tat ca cac ban                         |" << endl;
		cout << "|  2. Tim kiem thong tin theo ma ban                        |" << endl;
		cout << "|  0. Quay lai menu truoc                                   |" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
    void printBill()
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "|                      MENU BILL                            |" << endl;
		cout << "|  1.Them bill                                              |" << endl;
		cout << "|  2.Xuat                                                   |" << endl;
		cout << "|  3.Xoa                                                    |" << endl;
		cout << "|  4.Thong ke tong                                          |" << endl;
		cout << "|  0. Quay lai menu truoc                                   |" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
};