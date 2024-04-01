#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s, t;
    cin >> s >> t;
    int min = 1000;
    int c = 0;
    for(int i = 0; i <= s.size() - t.size(); i++) {
        int count = 0;
        for(int j = 0; j < t.size(); j++) {
            if (s[c+j] != t[j]) count++;
        }
        if (min > count) min = count;
        c++;
    }
    cout << min << endl;
}