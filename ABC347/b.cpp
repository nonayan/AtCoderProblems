#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    double x[n];
    double y[n];
    rep(i, n) cin >> x[i] >> y[i];
    rep(i, n) {
        double max = 0, c = 0;
        rep(j, n) {
            double d;
            d = sqrt(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2));
            if (max < d) {
                max = d;
                c = j;
            }
        }
        if (max == 0) cout << 1 << endl;
        else cout << c+1 << endl;
    }
    return 0;
}