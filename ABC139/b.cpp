#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int count = 1;
    while (count < b) {
        ans++;
        count = count + a - 1;
    }
    cout << ans << endl;
}