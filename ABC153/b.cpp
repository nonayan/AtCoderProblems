#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int h, n;
    cin >> h >> n;
    rep(i, n) {
        int a;
        cin >> a;
        h = h - a;
    }
    cout << (h <= 0 ? "Yes" : "No") << endl;
}