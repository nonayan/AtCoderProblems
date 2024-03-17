#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    ll n, k;
    cin >> n >> k;
    ll count = 1;
    ll ans = n/k;
    while(ans > 0) {
        ans = ans/k;
        count++;
    }
    cout << count << endl;
}