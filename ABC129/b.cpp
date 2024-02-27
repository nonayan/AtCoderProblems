#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int N;
    cin >> N;
    int a[N];
    int sum = 0;
    rep(i, N) cin >> a[i];
    rep(i, N) sum += a[i];
    int t = 0;
    int min = 100000000;
    rep(i, N-1) {
        t += a[i];
        if (min > abs((sum-t) - t)) {
            min = abs((sum-t)-t);
        }
    }
    cout << min << endl;

}