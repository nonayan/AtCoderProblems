#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int N;
    cin >> N;
    vector<tuple<string, int, int>> review;
    rep(i, N) {
        string s;
        int p;
        cin >> s >> p;
        p = -p;
        review.push_back(tie(s, p, i));
    }
    sort(review.begin(), review.end());
    rep(i, N) cout << get<2>(review[i])+1 << endl;
}