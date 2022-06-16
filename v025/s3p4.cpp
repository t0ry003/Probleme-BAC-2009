/*
    By Rares C. Olteanu - Thu Jun 16 2022
*/
#include "iostream"
#include "fstream"
#include "math.h"

using namespace std;

long cmmdc(long a, long b) {
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}

int main() {
    ifstream f("NUMAR.TXT");
    long a, b, c;
    double x;

    f >> x;

    b = 1;
    while (x - floor(x)) {
        x = x * 10;
        b = b * 10;
    }

    a = x;
    c = cmmdc(a, b);
    a /= c;
    b /= c;

    cout << a << " " << b;
}