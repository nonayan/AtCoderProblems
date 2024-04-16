#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    vector<int> a(4);
    rep(i, 4) cin >> a[i];
    sort(a.begin(), a.end());
    cout << a[0] << endl;
    return 0;
}