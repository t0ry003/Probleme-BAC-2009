/*
    By Rares C. Olteanu - Sun Jun 12 2022
*/
#include "iostream"

using namespace std;

int count(float a[100], int n) {
    float s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    float ma = s / n;
    int nr = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= ma)
            nr++;
    return nr;
}

int main() {
    float a[100] = {12, 7.5, 6.5, 3, 8.5, 7.5};
    int n = 6;
    cout << count(a, n);
}