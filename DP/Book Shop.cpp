// problem statements:  cses.fi/problemset/task/1158


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7, mxN = 1e3, mxX = 1e5;
int n, x, h[mxN], s[mxN], dp[mxX + 1];

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> x;
    for (int i = 0; i < n; ++i){
        cin >> h[i];
    }

    for (int j = 0; j < n; ++j){
        cin >> s[j];
    }

    for (int i = 0; i < n; ++i){
        for (int j = x; j >= h[i]; --j){
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }

    cout << dp[x];

    return 0;
}


