/*
    By Rares C. Olteanu - Tue Mar 29 2022
*/
#include "iostream"
#include "string.h"

using namespace std;

int main() {
    char t[101];

    cin.get(t, 101);

    char *p = strtok(t, " ");

    int sem = 1, nr2, r = 0;

    while (p != NULL) {
        int nr = 0;
        for (int i = 0; i < strlen(p); i++)
            if (p[i] >= '0' && p[i] <= '9')
                nr++;

        if (sem == 1) {
            nr2 = nr;
            sem = 2;
        }

        if (sem == 2 && nr != nr2) {
            sem = 0;
            break;
        } else
            r++;

        p = strtok(NULL, " ");
    }

    if (sem == 0)
        cout << "NU";
    else
        cout << r;
}