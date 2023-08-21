#include <bits/stdc++.h>

using namespace std;
int n, m, cnt;
string temp, smallx = "99999999", smalla = "99999999", ansx, ansa;
set<string> record;
int main() {
    int n, a1, a2, b1, b2;
    int al = 0, bl = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a1 >> a2 >> b1 >> b2;
        if (a2 == a1 + b1 && b2 != a1 + b1) {
            bl++;
        }
        else if (a2 != a1 + b1 && b2 == a1 + b1) {
            al++;
        }
    }
    cout << al << " " << bl;
    
}