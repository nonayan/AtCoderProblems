#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    string n;
    cin >> n;
    ll sum = 0;
    rep(i, n.size()) {
        sum += int(n[i]-'0');
    }
    cout << (sum%9 == 0 ? "Yes" : "No") << endl;
}