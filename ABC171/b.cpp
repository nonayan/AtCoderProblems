#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    sort(p.begin(), p.end());
    int sum = 0;
    rep(i, k) {
        sum += p[i];
    }
    cout << sum << endl;
}