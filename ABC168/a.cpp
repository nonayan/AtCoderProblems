#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    if (s[0] == '3') cout << "bon" << endl;
    else if (s[0] == '0' or s[0] == '1' or s[0] == '6' or s[0] == '8')  cout << "pon" << endl;
    else cout << "hon" << endl;
}