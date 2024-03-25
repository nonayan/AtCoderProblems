#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    int count = 0;
    ll ans = 0;
    if (k <= a) {
        ans = k;
    } else {
        ans = a;
        k = k - a;
        if (k > b) {
            k = k - b;
            ans = ans - k;
        }
    }
    cout << ans << endl;
}