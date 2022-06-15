/*
    By Rares C. Olteanu - Wed Jun 15 2022
*/
#include "iostream"

using namespace std;

int nz(int n) {
    int p = 5, s = 0;
    while (p <= n) {
        s += n / p;
        p *= 5;
    }
    return s;
}

int main() {
    int k, nr = 0, n = 5;
    cin >> k;
    while (nz(n) < k)
        n += 5;
    cout << n;
}