#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    gy = -gy;
    double x = gx-sx;
    double y = gy-sy;
    double a = y/x;
    double b = sy-a*sx;
    printf("%16lf\n", -b/a);
}