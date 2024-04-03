#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x1 = a*c;
    ll x2 = a*d;
    ll x3 = b*c;
    ll x4 = b*d;
    ll ans = max(x1, max(x2, max(x3, x4)));
    cout << ans << endl;
}