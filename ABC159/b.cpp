#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s1;
    bool can1 = false, can2 = false, can3 = false;
    cin >> s1;
    int n = s1.size();
    string s2 = s1;
    reverse(s1.begin(), s1.end());
    // 条件1
    if (s1 == s2) can1 = true;
    
    string s_n1 = "";
    string s_n2 = "";
    rep(i, (n-1)/2) {
        s_n1 += s2[i];
        s_n2 += s2[i];
    }
    reverse(s_n2.begin(), s_n2.end());
    // 条件2
    if (s_n1 == s_n2) can2 = true;
    
    string s_n3 = "";
    string s_n4 = "";
    for(int i = (n+3)/2-1; i < n; i++) {
        s_n3 += s2[i];
        s_n4 += s2[i];
    }
    reverse(s_n4.begin(), s_n4.end());
    // 条件3
    if (s_n3 == s_n4) can3 = true;
    
    cout << (can1 && can2 && can3 ? "Yes" : "No") << endl;

}