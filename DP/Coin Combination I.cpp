// problem statements:  cses.fi/problemset/task/1635


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7, mxN = 100, mxX = 1e6;
int n, x, c[mxN];
ll dp[mxX + 1];

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> x;
    for (int i = 0; i < n; ++i){
        cin >> c[i];
    }

    dp[0] = 1;
    for (int i = 1; i <= x; ++i){
        
        for (int j = 0; j < n; ++j){
            if (c[j] <= i){
                dp[i] = (dp[i] + dp[i - c[j]]) % M;
            }
        }
    }

    cout << dp[x];

    return 0;
}


