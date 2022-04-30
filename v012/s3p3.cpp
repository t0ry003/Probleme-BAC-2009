/*
    By Rares C. Olteanu - Sat Apr 30 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int vf[202];

int main() {
    int x_f1, x_f2, maxi = 0;

    ifstream f1("NR1.TXT");
    ifstream f2("NR2.TXT");
    while (f1 >> x_f1)
        if (x_f1 % 5 == 0) {
            vf[x_f1]++;
            if (x_f1 > maxi) maxi = x_f1;
        }
    while (f2 >> x_f2)
        if (x_f2 % 5 == 0) {
            vf[x_f2]++;
            if (x_f2 > maxi) maxi = x_f2;
        }

    for (int i = 5; i <= maxi; i += 5)
        if (vf[i] == 1) cout << i << " ";
}