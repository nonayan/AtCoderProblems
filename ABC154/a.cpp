#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;
    if (u == s) a--;
    else if (u == t) b--;
    cout << a << " " << b << endl;
}