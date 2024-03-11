#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b;
    cin >> a >> b;
    bool can = true;
    if (a > 9 or b > 9) can = false;
    if (can) {
        cout << a*b << endl;
    } else {
        cout << -1 << endl;
    }
}