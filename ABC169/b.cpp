#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    ll n;
    cin >> n;
    ll max = pow(10, 18);
    ll ans = 1;
    ll a[n];
    rep(i, n) {
        cin >> a[i];
        if (a[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << endl;
    rep(i, n) {
        if (a[i] > max/ans) {
            ans = -1;
            break;
        }
        ans *= a[i];
    }
    cout << ans << endl;
}