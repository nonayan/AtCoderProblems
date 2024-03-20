#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    float m;
    cin >> n >> m;
    int count = 0;
    int a[n];
    int sum = 0;
    rep(i, n) {
        cin >> a[i];
        sum += a[i];
    }
    float v = sum * (1/(4*m));
    rep(i, n) {
        float r = a[i];
        if (r >= v) count++;
    }
    cout << (count >= m ? "Yes" : "No") << endl;
}