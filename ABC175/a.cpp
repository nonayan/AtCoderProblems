#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    int count = 0;
    bool can = false;
    rep(i, 3) {
        if (s[i] == 'R') count++;
    }
    cout << (s[1] == 'S' and count > 0 ? 1 : count) << endl;
}