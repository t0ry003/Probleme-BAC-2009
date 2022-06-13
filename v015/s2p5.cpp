/*
    By Rares C. Olteanu - Sun May 15 2022
*/
#include "iostream"

using namespace std;

int a[7][7];

int main() {
    int n;
    cin >> n;
    // int c_UNIT = n % 10;
    int c_Z = n;

    for (int i = 1; i <= 6; i++) {
        int cif = c_Z % 10;
        for(int j=i+1; j<=6; j++)
            a[i][j] = cif;
        for(int ci=i+1; ci<=6; ci++)
            a[ci][i] = cif;
        c_Z /= 10;
    }

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}