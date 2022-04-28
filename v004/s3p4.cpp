/*
    By Rares C. Olteanu - Fri Apr 15 2022
*/
#include "iostream"

using namespace std;

int cif(long int a, int b) {
    int nr = 0;
    while (a != 0) {
        if (a % 10 == b)
            nr++;
        a /= 10;
    }
    return nr;
}

int main() { cout << cif(125854, 5); }