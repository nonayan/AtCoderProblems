#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, m;
    cin >> n >> m;
    int sum = 0;
    rep(i, n) sum += i;
    rep(j, m) sum += j;
    cout << sum << endl;
}