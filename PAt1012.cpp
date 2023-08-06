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
    
    
    int n, num, a1 = 0, a2 = 0, a5 = 0, a3 =0;
    double a4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num % 5].push_back(num);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) 
                a1 += v[i][j];
            if (i == 1 && j % 2 == 0) 
                a2 += v[i][j];
            if (i == 1 && j % 2 == 1) 
                a2 -= v[i][j];
            
            if (i == 3) 
                a4 += v[i][j];
            if (i == 4 && v[i][j] > a5) 
                a5 = v[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        if (i != 0) 
            cout<<" ";
        
        if (i == 0 && a1 == 0||i != 0 &&v[i].size() == 0) {
            cout << "N" ; 
            continue;
        }
        if (i == 0) 
            cout << a1;
        if (i == 1) 
            cout << a2;
        if (i == 2) 
            cout << v[2].size();
        if (i == 3) 
            cout  << fixed  <<  setprecision(1) << a4 / v[3].size();
        if (i == 4) 
            cout << a5;
    }
}