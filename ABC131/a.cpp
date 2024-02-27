#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string S;
    cin >> S;
    bool can = true;
    rep(i, 3) {
        if (S[i] == S[i+1]) {
            can = false;
        }
    }
    cout << (can ? "Good" : "Bad") << endl;

}
