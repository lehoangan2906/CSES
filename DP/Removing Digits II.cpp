// problem statements:  cses.fi/problemset/task/1637


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7, mxN = 1e6;
int dp[mxN + 1];
int n;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i){
        dp[i] = 1e6;
        int i2 = i;
        while(i2){
            dp[i] = min(dp[i], dp[i - i2 % 10] + 1);
            i2 /= 10;
        }
    }

    cout << dp[n];

    return 0;
}


