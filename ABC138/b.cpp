#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    double sum = 0;
    rep(i, n) {
        double a;
        cin >> a;
        sum += 1 / a;
    }
    cout << 1/sum << endl;
}