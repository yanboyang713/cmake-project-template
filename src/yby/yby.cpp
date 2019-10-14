#include "yby.h"
#include <iostream>
#include "random.h"
using namespace std;

birthday::birthday()
{
    month = num.getNum();
    day = num.getNum();
    year = num.getNum();
    return;
}
birthday::birthday(int m, int d, int y): month(m), day(d), year(y)
{

}
birthday::~birthday()
{
    cout << "destructor" << endl;
}
int birthday::getMonth() const
{
    return month;
}
int birthday::getDay() const
{
    return day;
}
int birthday::getYear() const
{
    return year;
}
