#ifndef EVALUATION_H
#define EVALUATION_H

#include <vector>
#include "Reader.h"
using namespace std;

class Evaluate
{
private:
    reader* Data;

public:
    Evaluate(reader* Data);
    void Construction(int* schedule);
    double Calculation(int* schedule);
};

#endif