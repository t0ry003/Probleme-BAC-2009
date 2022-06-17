/*
    By Rares C. Olteanu - Fri Jun 17 2022
*/
#include "iostream"
#include "fstream"

using namespace std;
ifstream f("NUMERE.IN");

void sterge(int v[100], int &n, int i, int j) {
    int k, l;
    for (k = i; k <= j; k++) {
        for (l = i; l < n; l++)
            v[l] = v[l + 1];
        n--;
    }
}

int main() {
    int n, v[100], i, j;
    f >> n;
    for (i = 1; i <= n; i++)
        f >> v[i];
    i = 1;
    while (i < n) {
        j = i + 1;
        while (v[i] == v[j])
            j++;
        sterge(v, n, i + 1, j - 1);
        i++;
    }
    for (i = 1; i <= n; i++)
        cout << v[i] << " ";
}