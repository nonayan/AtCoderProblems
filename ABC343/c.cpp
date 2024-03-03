#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main() {
  ll n;
  cin >> n;
  ll x[1000000000] = {};
  ll max = 0;
  for (ll i = 1; i*i*i < n+1; i++) {
    string s = to_string(i*i*i);
    string revers_s = s;
    reverse(revers_s.begin(), revers_s.end());
    if (s == revers_s) {
      if (max < i) {
        max = i;
      }
    }
  }
  cout << max*max*max << endl;
}
