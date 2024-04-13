#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    
    rep(i, s.size()) {
        if (s[i] == 'o') {
            x++;
        } else if (s[i] == 'x') {
            if (x != 0) x--;
        }
    }
    cout << x << endl;
    return 0;
}