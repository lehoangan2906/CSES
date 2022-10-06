// problem statements:  cses.fi/problemset/task/1638


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7, mxN = 1000;
int dp[mxN][mxN], n;
string s[mxN];

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;

    dp[0][0] = 1;

    for (int i = 0; i < n; ++i){
        cin >> s[i];
    }
    for (int i = 0 ; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (i)  // check for path from previous recursive session
                dp[i][j] += dp[i - 1][j];
            if (j)
                dp[i][j] += dp[i][j - 1];
    
            dp[i][j] %= M;

            // if there is a trap then set the dp to 0
            if(s[i][j] == '*'){
                dp[i][j] = 0;
            }
        }
    }

    cout << dp[n-1][n-1];

    return 0;
}


