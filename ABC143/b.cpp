#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    int t[n];
    rep(i, n) cin >> t[i];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            sum += t[i] * t[j];
        }
    }
    cout << sum << endl;
}