/*
    By Rares C. Olteanu - Sat May 14 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int sum_par(int x) {
    int s = 0;
    while (x != 0) {
        s += x % 10;
        x /= 10;
    }
    if (s % 2 == 0)
        return 1;
    return 0;
}

int main() {
    ifstream f("BAC.TXT");
    int no_nr = 1, x, a[101], no_sum_par = 0;
    
    while (f >> x) {
        if (sum_par(x))
            no_sum_par++;
        a[no_nr++] = x;
    }

    int sem = 0;
    for (int i = 1; i <= no_nr - 1; i++) {
        cout << a[i] << " ";
        sem++;
        if (sem == 5)
            cout << '\n';
    }

    cout << '\n' << no_sum_par;
}