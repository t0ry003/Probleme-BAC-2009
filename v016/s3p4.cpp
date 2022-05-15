/*
    By Rares C. Olteanu - Sun May 15 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int vf[10001];

int main() {
    ifstream f("numere.txt");
    int x, cif_MAX = 0;
    while (f >> x) {
        while (x != 0) {
            int c = x % 10;
            vf[c]++;
            if (c > cif_MAX)
                cif_MAX = c;
            x /= 10;
        }
    }
    for (int i = cif_MAX; i >= 0; i--)
        while (vf[i] != 0) {
            cout << i;
            vf[i]--;
        }
}