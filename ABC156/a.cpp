#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, r;
    cin >> n >> r;
    if (n >= 10) cout << r << endl;
    else cout << r+100*(10-n) << endl;
}