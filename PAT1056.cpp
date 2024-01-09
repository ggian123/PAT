#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    int sum = 0;
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum = sum + temp * 10 * (n-1) + temp * (n-1);
    }
    cout << sum;
}