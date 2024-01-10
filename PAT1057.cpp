#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])) {
            s[i] = toupper(s[i]);
            n += (s[i] - 'A' + 1);
        }
    }
    int mod;
    int one = 0;
    int zero = 0;
    
    while (n) {
        mod = n % 2;
        if (mod == 0) {
            zero++;
        }
        else {
            one++;
        }
        n = n / 2;
    }
    cout << zero << " " << one;
}