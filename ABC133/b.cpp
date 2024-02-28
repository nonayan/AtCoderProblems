#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, d;
    cin >> n >> d;
    int x[10][10];
    int ans = 0;
    rep(i, n) rep(j, d) cin >> x[i][j];
    for(int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int sum = 0;
            for (int k = 0; k < d; ++k) {
                sum += (x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
            }
            // doubleとintが等しければ整数
            if (int(sqrt(sum)) == sqrt(sum)) ans++;
        }
    }
    cout << ans << endl;
}