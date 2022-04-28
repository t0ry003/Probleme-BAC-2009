/*
    By Rares C. Olteanu - Fri Apr 15 2022
*/
#include "fstream"
#include "iostream"

using namespace std;

int main() {
    ofstream g("NR.TXT");
    int n;
    cin >> n;

    while (n > 0) {
        if (n != 0)
            g << n << " ";
        n /= 10;
    }
}