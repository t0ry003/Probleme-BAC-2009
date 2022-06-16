/*
    By Rares C. Olteanu - Thu Jun 16 2022
*/
#include "iostream"
//  <iomanip> pentru a include si functia setprecision() pentru a afisa
// maxim 3 cifre dupa virgula.
#include "iomanip"

using namespace std;

void p(int x[101], int n, int &mini, int &maxi, int &sum) {
    sum = x[1];
    mini = x[1];
    maxi = x[1];
    for (int i = 2; i <= n; i++) {
        sum += x[i];
        if (x[i] < mini)
            mini = x[i];
        if (x[i] > maxi)
            maxi = x[i];
    }
}

int main() {
    int x[101] = {0}, n, mini, maxi, sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    p(x, n, mini, maxi, sum);
    int sus = sum - mini - maxi;
    int jos = n - 2;

    cout << fixed << setprecision(3) << (float)sus / jos;
}