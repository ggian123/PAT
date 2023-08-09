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
    int n, low, high;
    string a, b;
    int da, db, pa = 0, pb = 0;
    cin >> a >> da >> b >> db;
    int ct1 = 0, ct2 = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] - '0' == da) {
            ct1 = ct1 + 1;
        }
    }
    for (int i = 0; i < ct1; i++) {
        pa = pa + da * pow(10, i);
    }

    for (int i = 0; i < b.length(); i++) {
        if (b[i] - '0' == db) {
            ct2 = ct2 + 1;
        }
    }
    for (int i = 0; i < ct2; i++) {
        pb = pb + db * pow(10, i);
    }

    int sum = pa + pb;
    cout << sum;
 
}