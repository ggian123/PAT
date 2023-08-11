#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {return a > b;}
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}
int main() {
    int arr[10];
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i]; 
        cnt = cnt + arr[i];        
    }
    cnt--;
    int ans = 0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] != 0){        
            cout << i;
            arr[i]--;
            cnt--;
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        while (arr[i] != 0){          
            cout << i;
            arr[i]--;
            cnt--;
        }
    }
    
    

}

