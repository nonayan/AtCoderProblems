#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int k, x;
    cin >> k >> x;
    bool isFirst = true;
    for (int i = -1000000; i < 1000000; ++i) {
        if (abs(i - x) < k) {
            if (isFirst) {
                cout << i;
            } else {
                cout << " " << i;
            }
            isFirst = false;
        }
    }
    cout << endl;
}