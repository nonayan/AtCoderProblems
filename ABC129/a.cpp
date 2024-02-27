#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int P, Q, R;
    cin >> P >> Q >> R;

    int a = P + Q;
    int b = Q + R;
    int c = P + R;

    cout << min(a, min(b, c)) << endl;

}