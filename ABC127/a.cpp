#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define INF 1010000000

int main(){
    int age, base_amount;
    cin >> age >> base_amount;

    if (age <= 5) cout << 0;
    else if (age <= 12) cout << base_amount/2;
    else cout << base_amount;

    cout << endl;
}