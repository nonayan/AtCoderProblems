#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    vector<int> s;
    rep(i, n){
        int p;
        cin >> p;
        s.push_back(p);
    }
    int count = 0;
    rep(i, n-2) {
        if (s[i] < s[i+1] && s[i+1] < s[i+2]) count++;
        if (s[i] > s[i+1] && s[i+1] > s[i+2]) count++;
    }
    cout << count << endl;
}