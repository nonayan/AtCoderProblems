#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    cout << (S[0] == S[1] && S[2] == S[3] && S[1] != S[2] ? "Yes" : "No") << endl;
}