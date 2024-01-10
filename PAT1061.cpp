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
    int n, m, temp;
    cin >> n >> m;
    vector<int> score(m), ans(m);
    for(int i = 0; i < m; i++)
        cin >> score[i];
    for(int i = 0; i < m; i++)
        cin >> ans[i];
    for(int i = 0; i < n; i++) {
        int total = 0;
        for(int j = 0; j < m; j++) {
            cin >> temp;
            if(temp == ans[j])
                total += score[j];
        }
        cout << total<<"\n";
    }
}