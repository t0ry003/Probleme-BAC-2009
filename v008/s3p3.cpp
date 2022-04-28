/*
    By Rares C. Olteanu - Sun Apr 17 2022
*/
#include "fstream"
#include "iostream"
#include "math.h"

using namespace std;

bool pp(int x) {
    if (sqrt(x) == (int)sqrt(x))
        return true;
    return false;
}

int main() {
    ifstream f("BAC.TXT");
    int n, v[51] = {0}, x, sum = 0;

    f >> n;
    for (int i = 1; i <= n; i++) {
        f >> x;
        if (pp(x) == true) {
            v[i] = x;
            sum += x;
        }
    }

    int sum2 = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] != 0) {
            sum2 += v[i];
            if (sum != sum2)
                cout << v[i] << "+";
            else
                cout << v[i] << "=" << sum;
        }
    }
}