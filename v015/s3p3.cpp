/*
    By Rares C. Olteanu - Sun May 15 2022
*/
#include "iostream"

using namespace std;

int n, a[32001];

int nr_div(int x) {
    int nr = 0;
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            nr++;
    // "+2" <-> 1 si x (el insusi)
    return nr + 2;
}

int main() {
    int max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a[i] = nr_div(i);
        if (a[i] > max)
            max = a[i];
    }
    for (int i = 1; i <= n; i++)
        if (a[i] == max) {
            cout << i;
            return 0;
        }
}