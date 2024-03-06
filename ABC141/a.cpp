#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    string s;
    cin >> s;
    if (s[0] == 'S') cout << "Cloudy";
    else if (s[0] == 'C') cout << "Rainy";
    else if (s[0] == 'R') cout << "Sunny";
    cout << endl;
}