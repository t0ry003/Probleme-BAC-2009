/*
    By Rares C. Olteanu - Mon Jun 13 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("nr1.txt");
    ifstream g("nr2.txt");
    int vf[100001] = {0};

    int n, m, c_n = 0, c_m = 0, x;
    f >> n;

    while (f >> x && c_n <= n) {
        vf[x] = 1;
        c_n++;
    }

    g >> m;
    while (g >> x && c_m <= m) {
        if (vf[x] == 1)
            cout << x << " ";
        c_m++;
    }
}