/*
    By Rares C. Olteanu - Sat May 14 2022
*/
#include "iostream"

using namespace std;

int main() {
    int n, a[501] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}