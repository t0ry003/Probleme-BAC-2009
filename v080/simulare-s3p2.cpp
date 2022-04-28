/*
    By Rares C. Olteanu - Tue Apr 05 2022
*/
#include "iostream"
#include "string.h"

using namespace std;

int main() {
    char t[251], x[251];
    cin.getline(t, 251);
    cin.get(x, 251);

    int c = 0;
    int sem = 1, sem2 = 0;

    char *cuv = strtok(t, " ;");
    while (cuv != NULL) {
        if (sem == 2) {
            cout << cuv << " ";
            sem = 0;
            sem2 = 1;
        }
        if (sem == 1) {
            if (strcmp(cuv, x) == 0) {
                sem = 2;
            }
        }
        if (sem2 == 1) {
            sem = 1;
            sem2 = 0;
        }
        cuv = strtok(NULL, " ;");
    }
}