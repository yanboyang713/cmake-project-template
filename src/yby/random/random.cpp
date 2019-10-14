#include "random.h"
#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
using namespace std;

Random::Random()
{
    num = 0;
    gNum();
    return;
}
Random::~Random()
{
    return;
}
int Random::getNum() const
{
    return num;
}
void Random::gNum()
{
    srand(time(0));  // Initialize random number generator.
    num = (rand() % 10) + 1;
    return;
}
