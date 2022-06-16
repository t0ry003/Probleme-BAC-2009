/*
    By Rares C. Olteanu - Thu Jun 16 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("bac.txt");

    int n, sem = 0;
    cin >> n;

    int x;
    while (f >> x)
        if (x % n == 0) {
            cout << x << " ";
            sem = 1;
        }

    if (sem == 0)
        cout << "NU EXISTA";
}