#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    int a[n], b[n], c[n-1];
    int sum = 0;
    rep(i, n) cin >> a[i];
    rep(j, n) {
        cin >> b[j];
        sum += b[j];
    }
    rep(k, n-1) cin >> c[k];
    rep(l, n-1) {
        if ((a[l+1] - a[l]) == 1) {
            sum += c[a[l]-1];
        }
    }
    cout << sum << endl;
}