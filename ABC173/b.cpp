#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    mp["AC"] = 0, mp["WA"] = 0, mp["TLE"] = 0, mp["RE"] = 0;
    rep(i, n) {
        string s;
        cin >> s;
        mp[s]++;
    }
    printf("AC x %d\n", mp["AC"]);
    printf("WA x %d\n", mp["WA"]);
    printf("TLE x %d\n", mp["TLE"]);
    printf("RE x %d\n", mp["RE"]);
}