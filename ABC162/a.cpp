#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    bool can = false;
    rep(i, 3) {
        int a = n%10;
        if (a == 7) can = true;
        n = n/10;
    }
    cout << (can ? "Yes" : "No") << endl;
}