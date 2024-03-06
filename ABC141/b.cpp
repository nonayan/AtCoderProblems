#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
// using ll = long long;
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    bool can = true;
    rep(i, s.size()) {
        if ((i+1)%2 == 0) {
            if (s[i] != 'L' and s[i] != 'U' and s[i] != 'D') can = false;
        } else {
            if (s[i] != 'R' and s[i] != 'U' and s[i] != 'D') can = false;
        }
    }
    cout << (can ? "Yes" : "No") << endl;
}