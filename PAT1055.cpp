#include <bits/stdc++.h>
using namespace std;
struct node {
    string name;
    int height;
};
int cmp(struct node a, struct node b) {
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}
int main() {

    int n, k, m;
    cin >> n >> k;
    vector<node> stu(n);
    for(int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].height;
    }
    
    sort(stu.begin(), stu.end(), cmp);
    m = n / k;
    int mod = n % k;
    int row = m + mod;
    int t = 0;
    int flag = row / 2;
    int lorr = 1;

    for (int i = 1; i <= k; i++) {
        vector<string> ans(row);
        for (int j = 1; j <= row; j++){
            if (j == 1){
                ans[flag] = stu[t].name;
                t++;
                
            }
            else if (j != 1 && j % 2 == 0) {
                ans[flag - lorr] = stu[t].name;
                t++;
            }
            else if (j != 1 && j % 2 == 1) {
                ans[flag + lorr] = stu[t].name;
                lorr++;
                t++;
            }
        }
        cout << ans[0];
        for(int i = 1; i < row; i++)
            cout << " " << ans[i];
        cout << endl;
        row = n / k;
        flag = row / 2;
        lorr = 1;
    }

}