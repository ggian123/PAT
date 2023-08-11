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
   cin >> a >> b;
   int d = b - a + 50;
   d = d / 100;
   int h = d / 3600;
   int min = (d % 3600) / 60;
   int sec = ((d % 3600) % 60);
   cout <<setw(2)<<setfill('0')<< h <<":"<<setw(2)<<setfill('0')<< min << ":"<<setw(2)<<setfill('0')<< sec;
}