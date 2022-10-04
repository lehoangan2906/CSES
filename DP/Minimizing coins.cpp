// problem statements: cses.fi/problemset/task/1634


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const int mxN = 100, mxX = 1e6, M = 1e9 + 7;
int n, x, c[mxN];
ll dp[mxX + 1];

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> x;

    for (int i = 0; i < n; ++i){
        cin >> c[i];
    }

    // traverse from 1 to the sum
    for (int i = 1; i <= x; ++i){
        dp[i] = 1e9; // set each element in dp to be infinity
        // loop through each coin
        for (int j = 0; j < n; ++j){
            if (c[j] <= i){ // if the value of the coin is less than the current sum, 
                            // that means we can take the coin by calling the dp
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }
 
    if (dp[x] >= 1e9){
        cout << -1;
    }else{
        cout << dp[x];
    }

    return 0;
}


