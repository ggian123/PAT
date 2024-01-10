#include <bits/stdc++.h>
using namespace std;

int a[1000000]={};
bool isprime(int a) {
    if(a <= 1) return false;
    int Sqrt = sqrt((double)a);
    for(int i = 2; i <= Sqrt; i++) {
        if(a % i == 0)
            return false;
    }
    return true;
}
bool cmp1(int a, int b) {
    return a > b;
}
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a+1, a+n+1, cmp1);
    int ans = 0, p = 1;
    while(ans <= n && a[p] > p) {
        ans++;
        p++;
    }
    cout << ans;
    return 0;
}