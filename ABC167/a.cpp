#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    string s, t;
    cin >> s >> t;
    bool can = true;
    rep(i, s.size()) {
        if (s[i] != t[i]) can = false;
    }
    if (s.size() != t.size()-1) can = false;
    cout << (can ? "Yes" : "No") << endl;
}