#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int w, b;
    cin >> w >> b;

    string s = "";
    rep(i, 30) s += "wbwbwwbwbwbw";
    bool can = false;
    int forcount = 0;
    int count = 0;
    rep(i, 24) {
        int wcount = 0;
        int bcount = 0;
        while(wcount <= w) {
            if (s[count] == 'w') wcount++;
            if (s[count] == 'b') bcount++;
            count++;
            if (wcount == w && bcount == b) can = true;
            if (count > 1000) break;
        }
        forcount++;
        count = forcount;
    }
    cout << (can ? "Yes" : "No") << endl;
}