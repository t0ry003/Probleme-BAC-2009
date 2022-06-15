/*
    By Rares C. Olteanu - Wed Jun 15 2022
*/
#include "iostream"
#include "fstream"

using namespace std;

int putere_a(int x) {
    while (x > 1) {
        if (x % 2 != 0)
            return 0;
        x /= 2;
    }
    return 1;
}

int main() {
    ifstream f("BAC.TXT");
    int n, a, b;
    f >> n;
    for (int i = 1; i <= n; i++) {
        int sem = 0;
        f >> a >> b;
        for (int j = b; j >= a && sem == 0; j--) {
            if (putere_a(j) == 1) {
                cout << j << " ";
                sem = 1;
            }
        }
        if (sem == 0)
            cout << 0 << " ";
    }
}