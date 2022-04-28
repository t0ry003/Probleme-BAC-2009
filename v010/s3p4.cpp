/*
    By Rares C. Olteanu - Thu Apr 28 2022

    f -->id, kg, pret_kg;
        Programul citeste o singura data valorile din fisier
    adaugand in vectorul de frecventa intitulat "vf". cu indicele
    tipul produsului, produsul dintre cantitate si pretul pe kg.
    In acelasi timp de fiecare data se verifica indicele maxim
    pentru a avea un punct final de parcurgere a vectorului de
    frecventa.
*/
#include "iostream"
#include "fstream"

using namespace std;

int vf[1001];

int main() {
    ifstream f("PRODUSE.TXT");
    int id, kg, pret_kg, id_max = 0;
    while (f >> id && f >> kg && f >> pret_kg) {
        if (id > id_max) id_max = id;
        vf[id] += kg * pret_kg;
    }
    for (int i = 0; i <= id_max; i++)
        if (vf[i] != 0) cout << i << " " << vf[i] << '\n';
}