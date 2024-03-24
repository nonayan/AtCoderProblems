#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int k, a, b;
    cin >> k >> a >> b;
    bool can = false;
    for(int i = a; i <= b; i++) {
        if(i%k == 0) can = true;
    }
    cout << (can ? "OK" : "NG") << endl;
}