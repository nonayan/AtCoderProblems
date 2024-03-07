#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    double n;
    cin >> n;
    double odd = 0;
    for(int i = 1; i < n+1; ++i) if (i%2 != 0) odd++;
    double ans = odd/n;
    cout << ans << endl;
}