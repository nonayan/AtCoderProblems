#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        ll sumA = (a*(a-1))/2;
        ll sumB = (b*(b+1))/2;
        sum += sumB - sumA;
    }
    cout << sum << endl;
}