#ifndef VNS_H
#define VNS_H

#include "Reader.h"
#include "Evaluation.h"
using namespace std;

class VNS
{
private:
    int IterMax;
    int ShakeIter;
    int TabuTenure;
    int NeighborMax;
    reader* Data;
    Evaluate* Sol;

public:
    VNS(int Itermax, int Shakeiter, int Tabutenure, int Neighbormax, reader* Data, Evaluate* Sol);
    bool NS1(int* schedule);
    bool NS2(int* schedule);
    bool NS3(int* schedule);
    bool NS4(int* schedule);
    void VNSearch(int* schedule);
};

#endif