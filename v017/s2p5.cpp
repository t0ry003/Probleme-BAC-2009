/*
    By Rares C. Olteanu - Mon May 16 2022
*/
#include "iostream"

using namespace std;

int main() {
    int n, a[21][21];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (j == n - i + 1) {
                a[i][j] = n;

                int cop_jD = j - 1;
                int cop_jI = j + 1;
                while (cop_jD >= 1) {
                    a[i][cop_jD] = a[i][cop_jD + 1] - 1;
                    cop_jD--;
                }
                while (cop_jI <= n) {
                    a[i][cop_jI] = a[i][cop_jI - 1] + 1;
                    cop_jI++;
                }
            }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}