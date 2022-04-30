/*
    By Rares C. Olteanu - Sat Apr 30 2022
*/
#include "iostream"

using namespace std;

int main() {
    int n, a[21], c = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, sem = 1;
        cin >> x;
        int cop_x = x;
        while (x / 10 != 0) {
            int cif = x % 10, cif_ant = (x / 10) % 10;
            if (cif_ant != cif) {
                sem = 0;
                break;
            }
            x /= 10;
        }
        if (sem == 1) a[c++] = cop_x;
    }

    for (int i = 1; i < c - 1; i++)
        for (int j = i + 1; j < c; j++)
            if (a[i] > a[j]) swap(a[i], a[j]);

    for (int i = 1; i < c; i++) cout << a[i] << " ";
}