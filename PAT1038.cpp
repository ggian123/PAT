#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, temp;
    cin >> n;
    vector<int> b(101);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        b[temp]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (i != 0) 
            cout << " ";
        cout << b[temp];
    }

}