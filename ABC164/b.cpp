#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 2;
    while(a > 0 && c > 0) {
        if (count%2 == 0) c = c - b;
        else a = a - d;
        count++;
    }
    cout << (c <= 0 ? "Yes" : "No") << endl;
}