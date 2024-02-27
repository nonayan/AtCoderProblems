#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i < (n+1); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int N, L;
    cin >> N >> L;
    int min = 100000;
    int sum = 0;
    rep(i, N) {
        int ap = L + i - 1;
        if (min > abs(ap)) min = abs(ap);
        sum += ap;
    }
    if (L > 0) min = -min;
    cout << sum + min << endl;
}
