#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int n;
    cin >> n;
    bool can = false;
    for(int i = 1; i < 10; ++i) {
        for(int j = 1; j < 10; ++j) {
            if (i*j == n) can = true;
        }
    }
    cout << (can ? "Yes" : "No") << endl;
}