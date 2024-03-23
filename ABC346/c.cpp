#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    ll n, k;
    cin >> n >> k;

    map<ll, ll> mp;
    ll a[n];
    rep(i, n) {
        cin >> a[i];
        mp[a[i]] = a[i];
    }

    ll sum = 0;
    sum = (k*(k+1))/2;

    rep(i, n) {
        if (mp[a[i]] <= k) {
            sum -= mp[a[i]];
            mp[a[i]] = 0;
        } else {
            continue;
        }
    }

    cout << sum << endl;

}