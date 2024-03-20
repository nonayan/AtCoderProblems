#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int x;
    cin >> x;
    int ans = 0;
    while(x >= 500) {
        ans += 1000;
        x -= 500;
    }
    while(x >= 5) {
        ans += 5;
        x -= 5;
    }
    cout << ans << endl;
}