/*
    By Rares C. Olteanu - Thu Jun 16 2022
*/
#include "iostream"

using namespace std;

int f(int n, int a[10]) {
    int nr = 0;
    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2 == 0)
            nr = nr * 10 + a[i];

    if (nr == 0)
        return -1;

    return nr;
}

int main() {
    int a[] = {2, 3, 5, 6, 4, 1};
    int n = 6;
    cout << f(n, a);
}