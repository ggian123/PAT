#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b ,c, m, n, t, x, y, z;
    char ch;
    cin >> a >> ch >> b >> ch >> c >> m >> ch >> n >> ch >> t;
    if (a > m || (a == m && b > n) || (a == m && b == n && c > t)) {
        swap(a, m); 
        swap(b, n); 
        swap(c, t);
        cout << "-";        
    }
    z = t < c ? t - c + 29 : t - c;
    n = t < c ? n - 1 : n;
    y = n < b ? n - b + 17 : n - b;
    x = n < b ? m - a - 1 : m - a;
    cout << x << "." << y << "." << z;

}