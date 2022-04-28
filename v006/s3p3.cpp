/*
    By Rares C. Olteanu - Fri Apr 15 2022
*/
#include "iostream"

using namespace std;

int main() {
    int n, v[101], sum = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    cout << sum << '\n';
    for (int i = n; i > 1; i--) {
        sum = sum - v[i];
        cout << sum << '\n';
    }
}