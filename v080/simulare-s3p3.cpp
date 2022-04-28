/*
    By Rares C. Olteanu - Tue Apr 05 2022
*/
#include "fstream"
#include "iostream"

using namespace std;

int main() {
    ofstream g("bac.txt");
    int n;
    cin >> n;

    // Si da am realizat ca nu are loc
    // dar nu am gasit formula magica asa ca...
    // rezolvare :)))))
    long long int p = 1;
    for (int i = 1; i <= n; i++)
        p *= i;

    int putere = 1;
    long long int nr = 45;
    while (n) {
        if (p % nr == 0) {
            g << putere;
            break;
        }
        nr *= 45;
        putere++;
    }
}