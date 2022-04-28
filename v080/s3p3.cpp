/*
    By Rares C. Olteanu - Wed Mar 23 2022
*/
#include "fstream"
#include "iostream"

using namespace std;

int cifre(int n) {
    if (n / 10 == 0)
        return 1;
    int c = n % 10;
    n /= 10;
    while (n != 0) {
        if (n % 10 != c)
            return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    ifstream f("bac.in");
    int a[1001], c = 1, x, v[1001], cV = 1;

    while (f >> x)
        a[c++] = x;

    for (int i = 1; i < c; i++)
        if (cifre(a[i]) == 1)
            v[cV++] = a[i];

    for (int i = 1; i < cV - 1; i++)
        for (int j = i + 1; j < cV; j++)
            if (v[j] < v[i])
                swap(v[j], v[i]);

    for (int i = 1; i < cV; i++)
        cout << v[i] << " ";
}