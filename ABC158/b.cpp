#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll sum = a + b;
    ll c = n/sum;
    ll blue = c * a;
    ll d = n%sum;
    if (d <= a) blue += d;
    else blue += a;
    cout << blue << endl;
}