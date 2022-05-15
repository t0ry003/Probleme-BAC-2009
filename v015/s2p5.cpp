/*
    By Rares C. Olteanu - Sun May 15 2022
*/
#include "iostream"

using namespace std;

int a[7][7];

int main() {
    int n;
    cin >> n;
    int c_UNIT = n % 10;
    int c_ZECI = n / 10;

    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++) {
            if ((i == 1 && i < j) || (j == 1 && i > j))
                a[i][j] = c_UNIT;
            if ((i == 2 && i < j) || (j == 2 && i > j))
                a[i][j] = c_ZECI % 10;
        }

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}