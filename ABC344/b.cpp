#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    vector<int> num;
    int in;
    while(cin >> in) {
        num.push_back(in);
    }
    int n = num.size();
    for(int i = n; i < 0; i--) {
        cout << num[i];
    }
}