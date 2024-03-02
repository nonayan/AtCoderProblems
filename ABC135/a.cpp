#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b;
    cin >> a >> b;
    int k = (a + b) / 2;
    if (abs(a - k) == abs(b - k)) {
        cout << k << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

}