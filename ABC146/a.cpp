#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000
string S[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main(){
    string s;
    cin >> s;
    rep(i, 6) if (S[i] == s) {
        int ans = 7 - i;
        cout << ans << endl;
    }
}