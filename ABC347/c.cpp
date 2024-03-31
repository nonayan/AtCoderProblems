#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<ll> D(N);
    rep(i, N) {
        cin >> D[i];
    }
    int count = 0;
    bool all_holidays = true;
    for (int i = 0; i < A+B; ++i) {
        rep(j, N) {
            int ans;
            if ((D[j]+i)%(A+B) == 0) ans = A+B;
            else ans = (D[j]+i)%(A+B);
            // cout << ans << endl;
            if (ans > A) {
            all_holidays = false;
            break;
            }
        }
        if (all_holidays) count++;
        // cout << (all_holidays ? "Yes" : "No") << endl;
    }

    if (count > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
