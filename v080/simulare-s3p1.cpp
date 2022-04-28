/*
    By Rares C. Olteanu - Tue Apr 05 2022
*/
#include "iostream"

using namespace std;

void rest(int x, int y, int n, int &k) {
    k = 0;
    for (int i = n; i >= 1; i--)
        if (i % x == 2 && i % y == 2) {
            k = i;
            break;
        }
}

int main() {
    int k = 0;
    rest(10, 101, 3000, k);
    cout << k;
}