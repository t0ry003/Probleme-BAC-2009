/*
    By Rares C. Olteanu - Sun Jun 12 2022
*/

/*
    Algoritmul este eficient deoarece citeste doar o singura data elementele
    sirului, in acelasi timp detectand maximul acestuia pentru a fi utilizat
    ulterior intr-un vector de freccventa de marime mica. Singura valoare din
    vectorul de frecventas este "1", in cazul in care numarul apare. Parcurgem
    vectorul de la elementul maxim "x_max" pana la valoarea "k" citita si
    numaram cate elemente sunt pana la aparitia acestuia, nedepasind pozitia
    pentru valoarea "k".
*/

#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("numere.txt");
    int a[10001], x, x_max = 0, k, count = 0;
    cin >> k;
    while (f >> x) {
        a[x] = 1;
        if (x > x_max)
            x_max = x;
    }
    for (int i = x_max; i >= k; i--)
        if (a[i] == 1)
            count++;
    cout << count;
}