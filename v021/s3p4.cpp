/*
    By Rares C. Olteanu - Tue Jun 14 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream f("BAC.TXT");
    int n, k, x[10001] = {0}, s = 0;
    f >> n >> k;
    for (int i = 1; i <= k; i++) {
        f >> x[i];
        s += x[i];
    }
    int i_max = 1;
    int s_max = s;
    int c = 1;
    for (int j = k + 1; j <= n; j++) {
        f >> x[j];
        s = s - x[c] + x[j];
        c++;
        if (s > s_max) {
            s_max = s;
            i_max = c;
        }
    }
    cout << i_max;
}