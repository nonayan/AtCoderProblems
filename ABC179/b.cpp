#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n, count = 0;
    cin >> n;
    bool can = false;
    rep(i, n) {
        int d1, d2;
        cin >> d1 >> d2;
        if (d1 == d2) count++;
        else count = 0;
        if (count == 3) can = true;
    }
    cout << (can ? "Yes" : "No") << endl;
    return 0;
}