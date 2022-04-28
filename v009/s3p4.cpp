/*
    By Rares C. Olteanu - Thu Apr 28 2022

        Programul este eficient deaorece accesand doar o singura data valorile
    din fisier reducem timpul de executare la jumatate (fata de accesarea de
    doua sau mai multe ori ca intr-o rezolvare modulara a problemei,nefiind
    limitati de memorie sau de timp). Dupa fiecare citire se actualizeaza
    maximul din sir pentru a avea un punct de plecare in vectorul de frecventa
    initializat cu 0 sau NULL pentru a nu ocupa mai multa memorie.
*/
#include "iostream"
#include "fstream"

using namespace std;

int vf[1000001];

int main() {
    ifstream f("BAC.TXT");

    int x, xmax = 0;
    while (f >> x) {
        if (x / 1000 == 0) {
            if (x > xmax) xmax = x;
            if (vf[x] == 0) vf[x]++;
        }
    }
    int nr = 1;
    for (int i = xmax - 1; i >= 0 && nr <= 2; i--) {
        if (vf[i] == 0) {
            cout << i << " ";
            nr++;
        }
    }
    if (nr == 0) cout << 0;
}