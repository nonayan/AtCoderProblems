#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, k, m;
    cin >> n >> k >> m;
    int sum = 0;
    rep(i, n-1) {
        int a;
        cin >> a;
        sum += a;
    }
    int ans = -1;
    rep(j, k+1) {
        int b = 0;
        b = sum + j;
        if (b/n >= m) {
            ans = j;
            break;
        }
    }
    cout << ans << endl;
}