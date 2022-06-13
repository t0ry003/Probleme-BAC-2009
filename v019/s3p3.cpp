/*
    By Rares C. Olteanu - Sun Jun 12 2022
*/
#include "iostream"

using namespace std;

void aranjare(float a[101], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[i])
                swap(a[i], a[j]);
    }
}

int main() {
    float a[100] = {12, -7.5, 6.5, -3, -8, 7.5};
    int n = 6;
    aranjare(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}