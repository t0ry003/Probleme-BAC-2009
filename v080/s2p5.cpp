/*
    By Rares C. Olteanu - Wed Mar 23 2022
*/
#include "iostream"
#include "string.h"

using namespace std;

int main() {
    char cuv[21], voc[] = "aeiouAEIOU";
    int pC, uV;

    cin >> cuv;

    for (int i = 0; i < strlen(cuv); i++)
        if (!(strchr(voc, cuv[i]))) {
            pC = i;
            break;
        }

    for (int i = strlen(cuv) - 1; i >= 0; i--)
        if (strchr(voc, cuv[i])) {
            uV = i;
            break;
        }

    swap(cuv[pC], cuv[uV]);

    cout << cuv;
}