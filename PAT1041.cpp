#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, m;
    cin >> n;
    string s[1001][2];
    string s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> s1 >> t >> s2;
        s[t][0] = s1;
        s[t][1] = s2;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n;
        cout << s[n][0] << " " << s[n][1] << "\n";
    }
}