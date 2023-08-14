#include <bits/stdc++.h>

using namespace std;
int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
int b[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
string s;
bool isTrue(string s) {
    int sum = 0;
    for (int i = 0; i < 17; i++) {
        if (s[i] < '0' || s[i] > '9') 
            return false;
        sum += (s[i] - '0') * a[i];
    }
    int temp = (s[17] == 'X') ? 10 : (s[17] - '0');
    return b[sum%11] == temp;
}
int main() {
    
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    vector<string> wr; 
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (!isTrue(s)) {
            cnt++;
            wr.push_back(s);
        }
    }
    if (wr.size() > 0) {
        for (int i = 0; i < wr.size(); i++) {
            cout << wr[i] << "\n";
        }
    }
    else {
        cout << "All passed";
    }
    
    
    
}






