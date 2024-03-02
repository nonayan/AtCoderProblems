#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i < (n+1); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i, n) {
        if (0 < i and i < 10 ) ans++;
        else if (99 < i and i < 1000) ans++;
        else if (9999 < i and i < 100000) ans++;
    }
    cout << ans << endl;
}