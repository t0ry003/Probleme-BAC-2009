/*
    By Rares C. Olteanu - Fri Jun 17 2022
*/
#include "iostream"
#include "math.h"

using namespace std;

double nreal(int n, int m) {
    int a = m, p = 1;

    while (a)
        p *= 10, a /= 10;

    double b;
    b = p * n + m;
    b = (double)b / p;

    return b;
}

int main() { cout << nreal(12, 543); }