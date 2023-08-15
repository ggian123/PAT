#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;

    int t = n / 2 + n % 2;
    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
    for (int i = 0; i < t - 2; i++) {
        cout << c;
        for (int k = 0; k < n - 2; k++)
            cout << " ";
        cout << c << endl;
    }
    for (int i = 0; i < n; i++)
        cout << c;


}