#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {return a > b;}
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}
int main() {
    string n;
    cin >> n;
    int arr[10] = {0};
    for(int i = 0; i < n.length(); i++) {
        
        arr[n[i] - '0']++;
      
    }
    for(int j = 0; j < 10; j++) {
            if (arr[j] != 0 ){
                cout << j <<":"<< arr[j] << "\n";
            }
        }
    
}

