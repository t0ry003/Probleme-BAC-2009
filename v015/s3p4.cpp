/*
    By Rares C. Olteanu - Sun May 15 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("BAC.IN");
    int imp_2 = 0, imp_1 = 0, x;

    while (f >> x) {
        if (x % 2 != 0)
            if (imp_1 == 0)
                imp_1 = x;
            else {
                imp_2 = imp_1;
                imp_1 = x;
            }
    }

    if (imp_2 == 0) {
        cout << "Numere insuficiente";
        return 0;
    }

    cout << imp_2 << " " << imp_1;
}