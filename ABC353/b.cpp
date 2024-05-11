#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];

    int count = 0;
    int c = 0;
    int rest_seat = k;
    while(n >= c) {
        if (a[c] <= rest_seat) {
            rest_seat -= a[c];
        }
        if (a[c+1] > rest_seat) {
            count++;
            rest_seat = k;
            c++;
            continue;
        }
        if (c == n) {
            count++;
        }
        c++;
    }
    cout << count-1 << endl;
}