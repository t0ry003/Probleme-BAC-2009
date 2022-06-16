/*
    By Rares C. Olteanu - Thu Jun 16 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("bac.txt");
    int x[30001] = {0}, n;
    f >> n;
    for (int i = 1; i <= n; i++) {
        int q;
        f >> q;
        x[q] = 1;
    }

    int a, b;
    f >> a >> b;

    for (int i = a; i <= b; i++)
        if (x[i] == 1) {
            cout << i;
            return 0;
        }
}