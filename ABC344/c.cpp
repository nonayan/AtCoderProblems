#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

bool sum(const vector<ll>& a, const vector<ll>& b, const vector<ll>& c, ll x) {
    ll n = a.size(), m = b.size();
    rep(i, n) {
        rep(j, m) {
            int lef = x - a[i] - b[j];
            if (binary_search(c.begin(), c.end(), lef)) {
                return true;
            }
        }
    }
    return false;
}

int main(){
    ll n, m, l, q;
    cin >> n;
    vector<ll> a;
    rep(i, n) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    cin >> m;
    vector<ll> b;
    rep(i, m) {
        int num;
        cin >> num;
        b.push_back(num);
    }
    cin >> l;
    vector<ll> c;
    rep(i, l) {
        int num;
        cin >> num;
        c.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    cin >> q;
    rep(i, q) {
        ll x;
        cin >> x;
        if (sum(a, b, c, x)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

}