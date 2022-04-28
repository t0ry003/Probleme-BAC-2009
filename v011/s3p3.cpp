/*
    By Rares C. Olteanu - Thu Apr 28 2022

        Programul va citi n, iar apoi cele n elemente verificand
    maximul la fiecare citire a unui nou element "x". Programul
    va afisa maximul pana la citirea curenta. (sirul fiind crescator)
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("numere.txt");
    int x, x_max = 0, n;
    f >> n;
    while (f >> x) {
        if (x > x_max) x_max = x;
        cout << x_max << " ";
    }
}