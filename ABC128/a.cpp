#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int A, P, AP = 0;
    cin >> A >> P;
    rep(i, A) P += 3;
    while(P >= 2) {
        AP += 1;
        P -= 2;
    }
    cout << AP << endl;
}