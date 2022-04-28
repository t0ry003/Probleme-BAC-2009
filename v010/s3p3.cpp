/*
    By Rares C. Olteanu - Thu Apr 28 2022
*/
#include "iostream"

using namespace std;

int prim(int x) {
    if (x == 0 || x == 1) return 0;
    for (int d = 2; d <= x / 2; d++)
        if (x % d == 0) return 0;
    return 1;
}

void sub(int n, int &a, int &b) {
    a = 0;
    b = 0;
    int nr = 1;
    for (int i = n - 1; i >= 2 && nr <= 2; i--)
        if (prim(i)) {
            if (nr == 1) a = i;
            if (nr == 2) b = i;
            nr++;
        }
}

int main() {
    int a, b;
    sub(28, a, b);
    cout << a << " " << b;
}