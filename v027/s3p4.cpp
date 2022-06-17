/*
    By Rares C. Olteanu - Fri Jun 17 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("NUMERE.IN");
    int v[101] = {0}, n, min = 0, sem_min = 0;
    f >> n;
    for (int i = 1; i <= n; i++) {
        double a;
        f >> a;
        v[i] = (int)a;
    }

    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++) {
            int x = v[i], y = v[j];
            if (x > y)
                swap(x, y);
            int dif = y - x;
            if (sem_min == 0) {
                min = dif;
                sem_min = 1;
            } else if (dif < min)
                min = dif;
        }
    cout << min;
}