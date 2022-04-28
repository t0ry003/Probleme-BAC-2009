#include "iostream"

using namespace std;

int sub(int v[], int n, int a) {
    int contor = 0;
    for (int i = 1; i <= n; i++)
        if (v[i] < a)
            contor++;
    return contor;
}

int main() {
    int n, a, v[101], sem = 1, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        s += sub(v, n, v[i]);

    if (s == n * (n - 1) / 2)
        cout << "DA";
    else
        cout << "NU";
}