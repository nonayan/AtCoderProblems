#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i <= (n); ++i)
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    int sum = 0;
    rep(i, n-1) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << -sum << endl;
}