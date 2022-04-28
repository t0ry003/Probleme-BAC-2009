/*
    By Rares C. Olteanu - Tue Apr 05 2022
*/
#include "iostream"

using namespace std;

int main() {
    int k = 0;
    for (int i = 1; i <= 999; i++) {
        int sem = 0;
        while (i != 0) {
            if (i % 10 == 9) {
                sem = 1;
                break;
            }
            i /= 10;
        }
        if (sem == 1)
            k++;
    }
    cout << k;
}