#include <iostream>
using namespace std;
class date
{
    int ngay, thang, nam;

public:
    date();
    date(int ngay, int thang, int nam);
    date(const date &);
    ~date();
    friend ostream &operator<<(ostream &, const date &d);
    friend istream &operator>>(istream &, date &d);
};