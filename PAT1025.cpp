#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {return a > b;}
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}
int main() {
    int first, k, n, temp;
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int sum = 0;
    while (first != -1) {
        list[sum++] = first;
        first = next[first];
    }
    for (int i = 0; i < (sum - sum % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for (int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
    return 0;
}