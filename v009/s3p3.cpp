/*
    By Rares C. Olteanu - Thu Apr 28 2022
*/
#include "iostream"

using namespace std;

void sub(int n, int k) {
    while (n != 0) {
        cout << k * n << " ";
        n--;
    }
}

int main() { sub(3, 5); }