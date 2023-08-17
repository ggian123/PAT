#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a[26] = {0};
    int t = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) 
            a[s[i] - 'a']++;
    }
    int max = a[0];
    for (int i = 1; i < 26; i++) {
        if (a[i] > max) {
            max = a[i];
            t = i;
        }
    }
    int ans = t + 'a';
    

    cout << (char)ans << " " << max;

}