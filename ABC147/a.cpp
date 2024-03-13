#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a+b+c > 21 ? "bust" : "win") << endl;
}