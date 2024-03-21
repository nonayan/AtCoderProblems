#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i <= (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    rep(i, n) {
        if (i%3 != 0 && i%5 != 0) sum += i;
    }
    cout << sum << endl;
}