/*
    By Rares C. Olteanu - Tue Mar 29 2022
*/
#include "iostream"
#include "math.h"

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int u = 0, nr = 0;
    for (int k = x; k <= y; k++) {
        int s = 0;
        nr++;
        for (int t = 1; t <= sqrt(k); t++)
            s += t * t;
        if (s != u) {
            cout << s << '*' << nr << " ";
            u = s;
            nr = 0;
        }
    }
}