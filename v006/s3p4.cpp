/*
    By Rares C. Olteanu - Fri Apr 15 2022
*/
#include "fstream"
#include "iostream"

using namespace std;

int main() {
    ifstream f("BAC.TXT");
    long long int x_pre, x_cur, nr = 1;

    f >> x_pre;
    while (f >> x_cur) {
        if (x_cur == x_pre)
            nr++;
        else {
            cout << x_pre << " " << nr << " ";
            x_pre = x_cur;
            nr = 1;
        }
    }

    cout << x_pre << " " << nr;
}