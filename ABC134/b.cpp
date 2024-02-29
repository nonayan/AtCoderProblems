#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, d;
    cin >> n >> d;
    int num = d*2 + 1;
    int ans = (n + num - 1)/num;
    cout << ans << endl;
}