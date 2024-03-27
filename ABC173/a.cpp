#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    cout << (n%1000 == 0 ? 0 : 1000-n%1000) << endl;
}