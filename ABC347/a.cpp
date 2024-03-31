#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> an;
    rep(i, n) {
        int a;
        cin >> a;
        if (a%k == 0) an.push_back(a/k);
    }
    sort(an.begin(), an.end());
    rep(i, an.size()) {
        if (i == an.size()-1) {
            cout << an[i] << endl;
        } else {
            cout << an[i] << " ";
        }
    }
}