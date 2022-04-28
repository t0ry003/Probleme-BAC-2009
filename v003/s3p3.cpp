/*
    By Rares C. Olteanu - Thu Apr 14 2022
*/
#include "fstream"
#include "iostream"

using namespace std;

int main() {
    ifstream f("NR.TXT");
    int x, v[101], c = 1;
    while (f >> x)
        if (x / 100 != 0)
            v[c++] = x;

    for (int i = 1; i < c - 1; i++)
        for (int j = i + 1; j < c; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    for (int i = 1; i < c; i++)
        cout << v[i] << " ";
}