#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n, k, d;
    cin >> n >> k;
    map<int, bool> mp;
    rep(i, n) mp[i] = false;
    rep(i, k) {
        int d;
        cin >> d;
        rep(j, d) {
            int a;
            cin >> a;
            mp[a-1] = true;
        }
    }
    int count = 0;
    rep(i, n) if (mp[i]) count++;
    cout << n-count << endl;
}