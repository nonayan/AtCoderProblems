#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    ll m = 0, t = 0;
    double y = 0;
    rep(i, n) {
        double x;
        cin >> x;
        m += abs(x);
        y += x*x;
        if (t < abs(x)) t = abs(x);
    }
    printf("%lld\n%.15lf\n%lld\n", m, sqrt(y), t);
    return 0;
}