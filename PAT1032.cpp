#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[n + 1] = {0};
    int num;
    int score;
    for (int i = 0; i < n; i++) {
        cin >> num >> score;
        arr[num] = arr[num] + score;
    }
    int max = arr[1], t = 1;
    for (int i = 2; i <= n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            t = i;
        }
    }
    cout << t <<" "<<max;
}






