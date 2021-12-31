#include "Reader.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

reader::reader(string add) {
    ifstream fin(add);
    double temp = 0;
    fin >> m;
    fin >> n;
    fin >> e0;
    aTime = new double[n];
    hTime = new double[n];
    bTime = new double[n];
    dTime = new double[n];
    qTime = new double[n];
    Alpha = new double[n];
    for (int i = 0; i < n; i++) {
        fin >> aTime[i];
    }
    for (int i = 0; i < n; i++) {
        fin >> hTime[i];
    }
    for (int i = 0; i < n; i++) {
        fin >> bTime[i];
    }
    for (int i = 0; i < n; i++) {
        fin >> dTime[i];
    }
    for (int i = 0; i < n; i++) {
        fin >> qTime[i];
    }
    for (int i = 0; i < n; i++) {
        fin >> Alpha[i];
    }
    fin >> Beta;
    fin.close();
}
reader::~reader() {
    delete[] aTime; aTime = nullptr;
    delete[] hTime; hTime = nullptr;
    delete[] bTime; bTime = nullptr;
    delete[] dTime; dTime = nullptr;
    delete[] qTime; qTime = nullptr;
    delete[] Alpha; Alpha = nullptr;
}

int reader::getm() {
    return m;
}

int reader::getn() {
    return n;
}

double reader::gete() {
    return e0;
}

double reader::a(int num) {
    return aTime[num];
}

double reader::h(int num) {
    return hTime[num];
}

double reader::b(int num) {
    return bTime[num];
}

double reader::d(int num) {
    return dTime[num];
}

double reader::q(int num) {
    return qTime[num];
}

double reader::alpha(int num) {
    return Alpha[num];
}

double reader::beta() {
    return Beta;
}