#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    string s;
    cin >> n >> s;
    string si, sj;
    rep(i, n/2) si += s[i];
    for (int j = n/2; j < n; ++j) sj += s[j];
    cout << (si == sj ? "Yes" : "No") << endl;
}