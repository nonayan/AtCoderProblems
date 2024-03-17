#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a[3][3];
    rep(i, 3) rep(j, 3) cin >> a[i][j];
    int n;
    cin >> n;
    int ans[3][3];
    rep(i, 3) rep(j, 3) ans[i][j] = false;
    rep(i, n) {
        int b;
        cin >> b;
        rep(k, 3) rep(l, 3) if (a[k][l] == b) ans[k][l] = true;
    }
    bool answer = false;
    // 横
    rep(i, 3) {
        int count = 0;
        rep(j, 3) if (ans[i][j]) count++;
        if (count == 3) answer = true;
    }
    // 縦
    rep(i, 3) {
        int count = 0;
        rep(j, 3) if (ans[j][i]) count++;
        if (count == 3) answer = true;
    }
    // 斜め
    if (ans[0][0] && ans[1][1] && ans[2][2]) answer = true;
    if (ans[0][2] && ans[1][1] && ans[2][0]) answer = true;
    cout << (answer ? "Yes" : "No") << endl;
}