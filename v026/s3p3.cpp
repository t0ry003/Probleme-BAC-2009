/*
    By Rares C. Olteanu - Fri Jun 17 2022
*/
#include "iostream"

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    while (k > 0) {
        cout << n * k << " ";
        k--;
    }
}