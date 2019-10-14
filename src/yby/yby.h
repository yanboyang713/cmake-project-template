#ifndef YBY_H
#define YBY_H
#include <iostream>
#include "random.h"
using namespace std;
class birthday
{
public:
    birthday(int, int, int);
    birthday();
    ~birthday();
    int getMonth() const;
    int getDay() const;
    int getYear() const;
private:
    int month;
    int day;
    int year;
    Random num;
};
#endif
