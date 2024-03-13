#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    rep(i, n-2) {
        if (s.substr(i, 3) == "ABC") ans++;
    }
    cout << ans << endl;
}