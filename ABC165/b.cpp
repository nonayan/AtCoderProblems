#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    ll x;
    cin >> x;
    ll a = 100;
    ll year = 0;
    while(a < x) {
        a += a/100;
        year++;
    }
    cout << year << endl;
}