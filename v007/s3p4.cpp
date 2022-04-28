/*
    By Rares C. Olteanu - Sun Apr 17 2022
*/
#include "iostream"

using namespace std;

long long int f(int n) {
    if (n <= 5)
        return n;
    return 2 * f(n - 1);
}

int sub(int n) {
    int c = 0;
    while (f(c) <= n) {
        c++;
    }
    return f(c - 1);
}

int main() {
    long long int s;
    cin >> s;
    while (s != 0) {
        int elem = sub(s);
        cout << elem << " ";
        s -= elem;
    }
}