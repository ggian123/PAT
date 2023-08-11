#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {return a > b;}
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}
int main() {
    int a, b;
    int n;
    cin >> a >> b >> n;
    int temp = a + b;
    if (temp == 0){
        cout << '0';
    }
    int nn[100];
    int i = 0;
    while (temp != 0) {
        nn[i] = temp % n;
        temp = temp / n;  
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << nn[j];

}

