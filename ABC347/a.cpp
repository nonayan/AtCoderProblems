#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i <= (n); ++i)
#define INF 1010000000

int main(){
    int x;
    cin >> x;
    rep(i, x) {
        if (i%3 == 0) cout << "x";
        else cout << "o";
    }
    cout << endl;
}