#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll a[n], c[n];
    rep(i, n) cin >> a[i] >> c[i];
    map<ll, ll> mp;
    rep(i, n) {
        if (mp[c[i]] == 0) mp[c[i]] = a[i];
        if (mp[c[i]] > a[i]) mp[c[i]] = a[i];
    }
    ll max = 0;
    rep(i, n) {
        if (max < mp[c[i]]) max = mp[c[i]];
    }
    cout << max << endl;
    return 0;
}