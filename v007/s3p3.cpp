/*
    By Rares C. Olteanu - Sun Apr 17 2022
*/
#include "fstream"
#include "iostream"

using namespace std;

int main() {
    ifstream g("BAC.TXT");
    int n, v[303];
    cin >> n;
    int nElem = 3 * n;

    for (int i = 1; i <= nElem; i++)
        cin >> v[i];

    // primul element par z1 ("1 <-> nElem-(2*n)")
    int p;
    for (int i = 1; i <= nElem - (2 * n); i++)
        if (v[i] % 2 == 0) {
            p = i;
            break;
        }

    // ultimul element impar z3 ("nElem <-> nElem-n")
    int u;
    for (int i = nElem; i > nElem - n; i--)
        if (v[i] % 2 != 0) {
            u = i;
            break;
        }

    swap(v[p], v[u]);

    for (int i = 1; i <= nElem; i++)
        cout << v[i] << " ";
}