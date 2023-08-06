#include <bits/stdc++.h>

using namespace std;
int arr[10000];
bool cmp(int a, int b) {return a > b;}
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    int cnt = 0;
    int start = 2;
    while (cnt < m) {
        if (isprime(start)) {
            cnt++;

        }
        if (cnt == m)
            cout <<start;
        start++;
    }
    int line = 1;

    while (cnt < n) {
        if (isprime(start)) {
            cnt++;
            line ++;
            if (line % 10 == 1 )
                cout << start;
            if (line % 10 == 0) {
                cout <<" "<<start;
                cout <<"\n";
            }
            if (line % 10 != 0 && line % 10 != 1)
                cout <<" "<<start;

        }
        start++;
    }
    
    
}
