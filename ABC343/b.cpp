#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    rep(i, n) {
        int s = 0, t = 0;
        int count = 0;
        int ans[100] = {};
        rep(j, n){
            int a;
            cin >> a;
            if (a == 1) {
                ans[count] = j+1;
                count++;
            }
            // if (a == 1 && count == 1) {
            //     t = j+1;
            // } else if (a == 1) {
            //     s = j+1;
            //     count++;
            // }
        }
        if (count == 0) {
            continue;
        } else {
            int count1 = 1;
            rep(i, 100) {
                if (ans[i] != 0) {
                    if (count == count1) {
                        cout << ans[i] << endl;;
                    } else {
                        cout << ans[i] << " ";
                        count1++;
                    }
                }
            }
        }
    }

}