#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n, d;
    cin >> n >> d;
    int count = 0;
    rep(i, n) {
        double x, y;
        cin >> x >> y;
        double distance = pow(pow(x, 2)+pow(y, 2), 0.5);
        if (distance <= d) count++;
    }
    cout << count << endl;
}