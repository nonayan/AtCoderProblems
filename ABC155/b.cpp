#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    bool ans = true;
    rep(i, n) {
        int a;
        cin >> a;
        if (a%2 == 0) {
            if (a%3 != 0 and a%5 != 0) ans = false;
        }
    }
    cout << (ans ? "APPROVED" : "DENIED") << endl;
}