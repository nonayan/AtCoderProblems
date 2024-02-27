#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int N, X;
    cin >> N >> X;
    int sum = 0, count = 1;
    rep(i, N) {
        int n;
        cin >> n;
        sum += n;
        if (sum > X) break;
        count += 1;
    }
    cout << count << endl;
}