/*
    By Rares C. Olteanu - Tue Jun 14 2022
*/
#include "iostream"

using namespace std;

bool prim(int x) {
    if (x == 0 || x == 1)
        return false;
    for (int d = 2; d <= x / 2; d++)
        if (x % d == 0)
            return false;
    return true;
}

int i_prim(int n) {
    for (int i = n - 1; i >= 1; i--)
        for (int j = n + 1; j <= 30001; j++)
            if (prim(i) && prim(j))
                return j - i;
}

int main() { cout << i_prim(20); }