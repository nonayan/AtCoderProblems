#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b;
    cin >> a >> b;
    int n = a + b;
    if (n == 3) cout << 3 << endl;
    else if (n == 4) cout << 2 << endl;
    else cout << 1 << endl;
}