#include "date.h"
#include <time.h>
#include <ctime>

date::date()
{
    this->nam = 0000;
    this->ngay = 00;
    this->thang = 00;
}
date::date(int ngay, int thang, int nam)
    : ngay(ngay), thang(thang), nam(nam)
{
}
date::date(const date &d)
{
    this->ngay = d.ngay;
    this->thang = d.thang;
    this->nam = d.nam;
}
date::~date()
{
}
ostream &operator<<(ostream &out, const date &d)
{
    out << d.ngay << "/" << d.thang << "/" << d.nam << endl;
    return out;
}
istream &operator>>(istream &cin, date &d)
{
    cout << "Ngay: ";
    cin >> d.ngay;
    cout << "Thang: ";
    cin >> d.thang;
    cout << "Nam: ";
    cin >> d.nam;
    return cin;
}