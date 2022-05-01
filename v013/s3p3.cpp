/*
    By Rares C. Olteanu - Sun May 01 2022
*/
#include "iostream"

using namespace std;

int main() {
    long long int n, i = 1, s = 0;
    
    cin >> n;

    do {
        s += i;
        i++;
    } while (s + i <= n);

    if (s == n) {
        cout << 1;
        return 0;
    }
    cout << i + 1 - n % s;
}