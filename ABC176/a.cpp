#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n, x, t;
    cin >> n >> x >> t;
    int s = 0;
    int ans = 0;
    while(s < n) {
        ans += t;
        s += x;
    }
    cout << ans << endl;
}