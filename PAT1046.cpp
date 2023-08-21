#include <bits/stdc++.h>

using namespace std;
int n, m, cnt;
string temp, smallx = "99999999", smalla = "99999999", ansx, ansa;
set<string> record;
int main() {
    int n, t, num, score;
    cin >> n;
    int team[1001] = {0};
    for (int i = 1; i <= n; i++) {
        scanf("%d-%d %d", &t, &num, &score);
        team[t] += score;
    }
    int max = 0;
    for (int i = 0; i < 1001; i++) {
        if (team[max] < team[i])
            max = i;
    }
    cout << max << " " << team[max];
    return 0;
}