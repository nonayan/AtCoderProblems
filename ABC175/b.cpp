#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    int l[n];
    rep(i, n) cin >> l[i];
    int count = 0;
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                int a, b, c;
                a = l[i] + l[j];
                b = l[i] + l[k];
                c = l[j] + l[k];
                if (l[i] == l[j] or l[i] == l[k] or l[k] == l[j]) {
                    continue;
                }
                if (a > l[k] and b > l[j] and c > l[i]) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}