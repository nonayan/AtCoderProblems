#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    bool can = false;
    rep(i, 2) {
        if (s[i] != s[i+1]) can = true;
    }
    cout << (can ? "Yes" : "No") << endl;
}