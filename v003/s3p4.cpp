/*
    By Rares C. Olteanu - Thu Apr 14 2022
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

int main() { cout << cif(13435323, 3); }