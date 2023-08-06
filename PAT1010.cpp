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
    int x, p;
    int flag = 0;
    while(cin >> x >> p){
        if (p != 0) {
            if (flag == 1) {
                cout << " ";
            }
            cout << (x * p) << " " << p - 1;
            flag = 1;
        }
        if (flag == 0) {
            cout << "0 0";
        }
    }
    
}

