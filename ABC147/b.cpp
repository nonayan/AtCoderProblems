#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    int ans = 0;
    int n = s.size();
    rep(i, (n/2)) {
    if (s[i] != s[n-1-i]) ans++;
    }
    cout << ans << endl;
}