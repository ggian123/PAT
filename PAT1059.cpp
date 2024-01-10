#include <bits/stdc++.h>
using namespace std;

int ran[10000] ={0};
bool isprime(int a) {
    if(a <= 1) return false;
    int Sqrt = sqrt((double)a);
    for(int i = 2; i <= Sqrt; i++) {
        if(a % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n, k;
    int id;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        ran[id] = i + 1;
    }
    cin >> k;
    set<int> record;
    for (int i = 0; i < k; i++) {
        int id;
        cin >> id;
        printf("%04d: ", id);
        if(ran[id] == 0) {
            cout << "Are you kidding?\n";
            continue;
        }
        if(record.find(id) == record.end()) {
            record.insert(id);
        } else {
            cout <<"Checked\n";
            continue;
        }
        if(ran[id] == 1) {
            cout << "Mystery Award\n";
        }else if(isprime(ran[id])) {
            cout << "Minion\n";
        }else {
            cout << "Chocolate\n";
        }

    }
}