#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, k;
    int ans = 0;
    cin >> n >> k;
    rep(i, n) {
        int h = 0;
        cin >> h;
        if (h >= k) ans++;
    }
    cout << ans << endl;
}