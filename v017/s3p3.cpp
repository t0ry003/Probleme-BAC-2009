/*
    By Rares C. Olteanu - Mon May 16 2022
*/
#include "iostream"

using namespace std;

int interval(int a[101], int n) {
    int nr = 0, cap_st = a[0], cap_fn = a[n - 1];

    if (cap_st > cap_fn)
        swap(cap_st, cap_fn);

    for (int i = 0; i < n; i++)
        if (a[i] >= cap_st && a[i] <= cap_fn)
            nr++;

    return nr;
}

int main() {
    int a[101] = {12, 27, 6, 8, 9, 2}, n = 6;
    cout << interval(a, n);
}