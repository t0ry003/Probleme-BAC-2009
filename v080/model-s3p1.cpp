/*
    By Rares C. Olteanu - Tue Mar 29 2022
*/
#include "iostream"

using namespace std;

int cmmdc(int x, int y) {
    while (x != y)
        if (x >= y)
            x -= y;
        else
            y -= x;
    return x;
}

int cmmmc(int x, int y) { return x * y / cmmdc(x, y); }

int mozaic(int x, int y, int z) { return cmmmc(cmmmc(x, y), z); }

int main() { cout << mozaic(30, 40, 20); }