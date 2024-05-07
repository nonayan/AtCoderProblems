#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n, m, t;
    bool can = true;
    cin >> n >> m >> t;
    ll max = n;
    int s = 0;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        n = n - (a - s);
        if(n <= 0) can = false;
        n = n + (b - a);
        s = b;
        if (n > max) n = max;
    }
    n = n - (t - s);
    if (n <= 0) can = false;
    cout << (can ? "Yes" : "No") << endl;
}