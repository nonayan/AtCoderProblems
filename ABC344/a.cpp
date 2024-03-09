#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    string ans = "";
    int count = 0;
    rep(i, s.size()) {
        if (s[i] == '|') {
            count++;
            continue;
        }
        if (count == 0 or count == 2) ans += s[i];
    }
    cout << ans << endl;

}