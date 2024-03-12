#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    string S;
    cin >> n >> S;
    string ans;
    rep(i, S.size()) {
        char s = S[i] - 'A' + n;
        ans += s%26 + 'A';
    }
    cout << ans << endl;
}