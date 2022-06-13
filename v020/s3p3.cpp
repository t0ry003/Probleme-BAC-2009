/*
    By Rares C. Olteanu - Mon Jun 13 2022
*/
#include "iostream"

using namespace std;

void nule(int a[100], int n) {
    for (int i = n - 1; i >= 1; i--)
        for (int j = i - 1; j >= 0; j--)
            if (a[j] == 0)
                swap(a[j], a[i]);
}

int main() {
    int a[] = {12, 0, 0, -3, -8, 0}, n = 6;
    nule(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}