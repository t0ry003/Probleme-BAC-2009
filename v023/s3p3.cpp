/*
    By Rares C. Olteanu - Wed Jun 15 2022
*/
#include "iostream"

using namespace std;

void shift(int n, int x[101]) {
    int mem = x[0];
    n--;

    for (int i = 0; i < n; i++)
        x[i] = x[i + 1];

    x[n] = mem;
}

int main() {
    int x[101] = {0}, n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = n; i >= 1; i--)
        shift(i, x);

    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
}