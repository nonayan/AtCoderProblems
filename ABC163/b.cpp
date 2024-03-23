#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i <= (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, m;
    cin >> n >> m;
    int sum = 0;
    rep(i, m) {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum > n) cout << -1 << endl;
    else cout << n - sum << endl;
}