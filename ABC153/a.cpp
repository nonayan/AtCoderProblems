#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int h, a;
    cin >> h >> a;
    int count = 0;
    while(h > 0) {
        h = h - a;
        count++;
    }
    cout << count << endl;
}