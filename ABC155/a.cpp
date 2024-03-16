#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b and b == c) cout << "No" << endl;
    else if (a == b or b == c or a == c) cout << "Yes" << endl;
    else cout << "No" << endl;
}