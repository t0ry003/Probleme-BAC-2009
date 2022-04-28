/*
    By Rares C. Olteanu - Tue Apr 05 2022
*/
#include "iostream"

using namespace std;

int main() {
    ok = 0;
    for (j = 1; j <= 13; j++)
        if (a[0][j] == a[1][j - 1] && a[1][j - 1] == a[2][j] &&
            a[2][j] == a[1][j + 1])
            ok = 1;
}