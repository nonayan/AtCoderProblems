#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;

    // 文字列から整数に変換
    int a = (s[0] - '0')*10 + s[1] - '0';
    int b = (s[2] - '0')*10 + s[3] - '0';

    bool yymm = false;
    bool mmyy = false;

    if (1 <= a and a <= 12) mmyy = true;
    if (1 <= b and b <= 12) yymm = true;

    if (mmyy && yymm) {
        // どちらも満たす
        cout << "AMBIGUOUS" << endl;
    } else if (mmyy) {
        // mmyyのみを満たす
        cout << "MMYY" << endl;
    } else if (yymm) {
        // yymmのみを満たす
        cout << "YYMM" << endl;
    } else {
        // どちらも満たさない
        cout << "NA" << endl;
    }
}