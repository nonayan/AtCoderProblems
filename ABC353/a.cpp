#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000
using ll = long long;

int main(){
    int n;
    cin >> n;
    int max = 0;
    int h[n];
    rep(i, n) cin >> h[i];
    int ans = -1;
    rep(i, n) {
        if (max < h[i]) {
            max = h[i];
            if (i != 0) {
                ans = i+1;
                break;
            }
        }
    }
    cout << ans << endl;
}