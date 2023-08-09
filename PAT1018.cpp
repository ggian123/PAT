#include <bits/stdc++.h>

using namespace std;

bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int win(string a, string b){
    if (a == "C" && b == "J") {
        return 1;
    }
    else if((a == "C" && b == "B")){
        return 2;
    }
    else if((a == "J" && b == "C")){
        return 2;
    }
    else if((a == "J" && b == "B")){
        return 1;
    }
    else if((a == "B" && b == "J")){
        return 2;
    }
    else if((a == "B" && b == "C")){
        return 1;
    }
    else if(a == b){
        return 0;
    }
}
int main() {
    int n;
    cin >> n;
    string a, b;
    
    int awin = 0, bwin = 0, tie = 0;
    int ab = 0, ac = 0, aj = 0;
    int bb = 0, bc = 0, bj = 0;
    for (int i = 0; i < n; i++ ) {
        cin >> a >> b;
        if (win(a, b) == 1){
            awin = awin + 1;
            if (a == "C")
                ac++;
            else if (a == "B")
                ab++;
            else if (a == "J")
                aj++; 
        }
        else if ((win(a, b) == 2)) {
            bwin = bwin + 1;
            if (b == "C")
                bc++;
            else if (b == "B")
                bb++;
            else if (b == "J")
                bj++;
            
        }
        else{
            tie = tie + 1;
        }
    }
    char aws, bws;
    if (max(max(ab, aj),ac) == ac && ac != ab){
        aws = 'C';
    }
    else if (max(max(ab, aj),ac) == aj && aj != ac && aj != ab){
        aws = 'J';
    }
    else if (max(max(ab, aj),ac) == ab ){
        aws = 'B';
    }
    


    if (max(max(bb, bj),bc) == bc  && bc != bb){
        bws = 'C';
    }
    else if (max(max(bb, bj),bc) == bj && bj != bc && bj != bb){
        bws = 'J';
    }
    else if (max(max(bb, bj),bc) == bb){
        bws = 'B';
    }
    
    
    cout <<awin<<" "<<tie<<" "<<n - tie - awin<<"\n";
    cout <<bwin<<" "<<tie<<" "<<n - bwin - tie<<"\n";
    cout <<aws<<" "<<bws;

}