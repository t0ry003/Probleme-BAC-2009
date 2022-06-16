/*
    By Rares C. Olteanu - Thu Jun 16 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("NR.TXT");
    int sem = 0;

    int x, a[101] = {0}, c = 1;
    while (f >> x)
        if (x > 0) {
            a[c++] = x;
            sem = 1;
        }

    for (int i = 1; i < c - 1; i++)
        for (int j = i + 1; j < c; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);

    if (sem == 0)
        cout << "NU EXISTA";
    else
        for (int i = 1; i < c; i++)
            cout << a[i] << " ";
}