#include <bits/stdc++.h>

using namespace std;

bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

struct node {
    int num, de, cai;
};
bool cmp(struct node a, struct node b) {
    if ((a.de + a.cai) != (b.de + b.cai))
        return (a.de + a.cai) > (b.de + b.cai);
    else if (a.de != b.de)
        return a.de > b.de;
    else
        return a.num < b.num;
}
int main() {
    string a;
    int b;
    cin >> a >> b;
 
    int len = a.length();
    int q = (a[0] - '0') / b;
    int r = (a[0] - '0') % b;
    int temp;
    if ((q != 0 && len > 1) || len == 1)
        cout << q;
    for (int i = 1; i < len; i++){
        q = ((r * 10) + a[i] - '0') / b;
        cout << q;
        r= ((r * 10) + a[i] - '0') % b;

    }
    cout << " " << r;
}