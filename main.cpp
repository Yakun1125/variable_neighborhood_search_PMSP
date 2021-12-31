#include <iostream>
#include <fstream>
#include <ctime>
#include "Reader.h"
#include "Evaluation.h"
#include "VNS.h"
using namespace std;
clock_t start, eend;

int main()
{
    reader *Data = new reader("C:\\Users\\WYKge\\Desktop\\NewVNS\\8_2_0.2_0.2_1.txt");
    Evaluate *sol = new Evaluate(Data);
    VNS *Search = new VNS(10, 10, 2, 200, Data, sol);
    int *skd = new int[Data->getn()];

    start = clock();
    sol->Construction(skd);
    cout << sol->Calculation(skd) << endl;
    Search->VNSearch(skd);
    eend = clock();
    for (int m = 0; m < Data->getn(); m++)
    {
        cout << skd[m] << ", ";
    }
    cout << endl;
    cout << "Best found: " << sol->Calculation(skd) << endl;
    double endtime1 = (double)(eend - start) / CLOCKS_PER_SEC;
    cout << "Total time1:" << endtime1 << endl;

    delete Data;
    Data = nullptr;
    delete sol;
    sol = nullptr;
    delete[] skd;
    skd = nullptr;
    return 0;
}