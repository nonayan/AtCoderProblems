#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    rep(i, n-1) {
        if (i == n-2) cout << a[i]*a[i+1] << endl;
        else cout << a[i]*a[i+1] << " ";
    }
}