#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s, t;
    cin >> s >> t;
    int ans = 0;
    rep(i, 3) {
        if (s[i] == t[i]) ans++;
    }
    cout << ans << endl;
}