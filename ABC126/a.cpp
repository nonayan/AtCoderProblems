#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
  int n, k;
  string s;
  cin >> n >> k >> s;
  rep(i, n) {
    // 文字列sのk文字目を小文字に変換
    if (i == k-1) s[i] = tolower(s[i]);
  }
  cout << s << endl;
}