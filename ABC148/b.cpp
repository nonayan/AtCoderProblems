#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    string s, t;
    cin >> n >> s >> t;
    rep(i, n) {
        rep(j, 2) {
            if (j%2 == 0) cout << s[i];
            else cout << t[i];
        }
    }
    cout << endl;
}