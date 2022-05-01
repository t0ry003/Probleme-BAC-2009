/*
    By Rares C. Olteanu - Sun May 01 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int n = 123;

void P(int &n, int c) {
    int nr_obt = 0, p = 1;
    while (n != 0) {
        if (n % 10 != c) {
            nr_obt += (n % 10) * p;
            p *= 10;
        }
        n /= 10;
    }
    n = nr_obt;
}

int rm_imp(int &n) {
    if (n == 0) return 0;
    for (int i = 1; i <= 9; i += 2) P(n, i);
    if (n == 0) return 0;
    return n;
}

int main() {
    ifstream f("BAC.IN");
    ofstream g("BAC.OUT");

    int x;
    while (f >> x) {
        n = x;
        if (rm_imp(n) != 0) g << n << " ";
    }
}