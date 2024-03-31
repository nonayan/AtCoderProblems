#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int countSubstrings(string s) {
    vector<string> substrings; // 部分文字列の集合
    // 全ての部分文字列を生成
    rep(i, s.length()) {
        for (int j = i + 1; j <= s.length(); ++j) {
            substrings.push_back(s.substr(i, j - i));
        }
    }
    int count = 1;
    sort(substrings.begin(), substrings.end());
    rep(i, substrings.size()-1) {
        if (substrings[i] != substrings[i+1]) {
            count++;
        }
    }
    return count; // 集合のサイズが部分文字列の種類数
}

int main() {
    string S;
    cin >> S;

    int result = countSubstrings(S);
    cout << result << std::endl;

    return 0;
}