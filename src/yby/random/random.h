#include <iostream>
using namespace std;
#ifndef RANDOM_H
#define RANDOM_H
class Random
{
public:
    Random();
    ~Random();
    int getNum() const;
private:
    int num;
protected:
    void gNum();
};
#endif
