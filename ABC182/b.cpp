#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    map<int, int> mp;
    cin >> n;
    rep(i, n) {
        int a;
        cin >> a;
        for(int i = 2; i <= a; i++) {
            if (a%i == 0) mp[i]++;
        }
    }
    int max = 0;
    int ans = 0;
    rep(i, 1001) {
        if (mp[i] > max) {
            max = mp[i];
            ans = i;
        }
    }
    cout << ans << endl;
}