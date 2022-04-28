/*
    By Rares C. Olteanu - Thu Apr 28 2022
*/
#include "iostream"

using namespace std;
int sum(int x) {
    int s = 0;
    for (int d = 1; d <= x / 2; d++)
        if (x % d == 0) s += d;
    return s + x;
}
int main() {
    int n, x, nr = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (sum(x) == x + 1) nr++;
    }
    cout << nr;
}