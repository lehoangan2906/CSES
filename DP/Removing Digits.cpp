// problem statements: cses.fi/problemset/task/1637


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7, mxN = 1e6;
int n;

// the idea is to use an array dp[] of size n + 1 such that dp[i] will store the 
// minimum number of operations needed to reduce i to 0
//
// for every digit x in the number n, the recursive formula is: dp[i] = min(dp[i], dp[i - x] + 1)
int solve(int n){
    vector<int> dp(n + 1, 1e6);
    dp[0] = 0;
    for (int i = 0; i <= n; ++i){
        for (char c : to_string(i)) {
            dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
        }
    }
    return dp[n];
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    cout << solve(n);

    return 0;
}


