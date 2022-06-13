/*
    By Rares C. Olteanu - Mon May 16 2022
*/
#include "iostream"

using namespace std;

int main() {
    int n, a[17][17];
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = 3;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j || j == n - i + 1)
                a[i][j] = 0;
            else if (i < j && j < n - i + 1)
                a[i][j] = 1;
            else if (i > j && j > n - i + 1)
                a[i][j] = 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}