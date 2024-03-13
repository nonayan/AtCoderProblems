#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    ll a, b, k;
    cin >> a >> b >> k;
    if(a >= k) {
        a = a - k;
        k = 0;
    } else {
        k = k - a;
        a = 0;
    }
    if (b >= k) {
        b = b - k;
        k = 0;
    } else {
        b = 0;
    }
    cout << a << " " << b << endl;
}