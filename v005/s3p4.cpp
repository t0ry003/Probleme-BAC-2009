/*
    By Rares C. Olteanu - Fri Apr 15 2022
*/
#include "iostream"

using namespace std;

int prim(int x) {
    if (x == 1 || x == 0)
        return 0;
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int f(int a) {
    for (int i = 2; i <= a; i++)
        if (a % i == 0 && prim(i) == 1)
            return i;
}

int main() {
    int n, v[101], v2[101], c = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        if (f(v[i]) == v[i])
            v2[c++] = v[i];

    for (int i = 1; i < c - 1; i++)
        for (int j = i + 1; j < c; j++)
            if (v2[i] > v2[j])
                swap(v2[i], v2[j]);

    for (int i = 1; i < c; i++)
        cout << v2[i] << " ";
}