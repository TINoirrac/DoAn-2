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
		cout << "|  1. Quan ly thong tin nhan vien       |" << endl;
		cout << "|  2. Quan ly thuc don                  |" << endl;
		cout << "|  3. Quan ly dat hang                  |" << endl;
		cout << "|  4. Quan ly hoa don                   |" << endl;
		cout << "|  5. Ket thuc                          |" << endl;
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
		cout << "|  6. Sap xep thong tin cua nhan vien theo ma nhan vien     |" << endl;
		cout << "|  0. Quay lai menu truoc                                   |" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
    void printMenuFood()
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "|                       MENU FOOD                            |" << endl;
		cout << "|  1. Xem danh sach tat ca cac thuc don                      |" << endl;
		cout << "|  2. Them 1 thuc don vao cuoi danh sach                     |" << endl;
		cout << "|  3. Xoa 1 thuc don theo ma thuc don                        |" << endl;
		cout << "|  4. Cap nhat thong tin cua thuc don theo ma thuc don       |" << endl;
		cout << "|  5. Tim kiem thong tin cua thuc don theo ma thuc don       |" << endl;
		cout << "|  6. Sap xep thong tin cua thuc don theo ma thuc don        |" << endl;
		cout << "|  0. Quay lai menu truoc                                    |" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "Hay nhap lua chon: ";
	}
   void printMenuOrder()
	{
			cout << "-------------------------------------------------------------" << endl;
		cout << "|                       MENU ORDER                              |" << endl;
		cout << "|  1. Xem danh sach tat ca cac don dat hang                     |" << endl;
		cout << "|  2. Them 1 don dat hangvao cuoi danh sach                     |" << endl;
		cout << "|  3. Xoa 1 don dat hangtheo ma don dat hang                    |" << endl;
		cout << "|  4. Cap nhat thong tin cua don dat hangtheo ma don dat hang   |" << endl;
		cout << "|  5. Tim kiem thong tin cua don dat hangtheo ma don dat hang   |" << endl;
		cout << "|  6. Sap xep thong tin cua don dat hangtheo ma don dat hang    |" << endl;
		cout << "|  0. Quay lai menu truoc                                       |" << endl;
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