#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    vector <int> p(n);
    vector <int> s(n);

    rep(i, n) cin >> p[i];
    s = p;
    bool can = false;
    int count = 0;
    sort(s.begin(), s.end());
    rep(i, n) {
        if (s[i] != p[i]) count++;
    }
    cout << (count > 2 ? "NO" : "YES") << endl;

}