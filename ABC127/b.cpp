#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int r, D, x;
    cin >> r >> D >> x;
    rep(i, 10) {
        ll R = r*x - D;
        cout << R << endl;
        x = R;
    }
}