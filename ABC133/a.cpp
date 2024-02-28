#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    cout << (n*a > b ? b : n*a) << endl;
}