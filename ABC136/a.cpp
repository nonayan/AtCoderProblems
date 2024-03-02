#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c - (a - b);
    cout << (ans < 0 ? 0 : ans) << endl;
}