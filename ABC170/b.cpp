#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int x, y;
    cin >> x >> y;
    bool can = false;
    if (x*2 <= y and y <= x*4){
        if (y%2 == 0) can = true;
    }
    cout << (can ? "Yes" : "No") << endl;
}