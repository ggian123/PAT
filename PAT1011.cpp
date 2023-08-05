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
    long long int n, a, b, c;
    int flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b > c) {
            cout << "Case #"<<i+1<<": true\n" ;
        }
        else {
            cout << "Case #"<<i+1<<": false\n"; 
        }
    }

}