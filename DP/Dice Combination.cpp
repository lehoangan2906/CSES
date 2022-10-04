// problem statements: https://cses.fi/problemset/task/1633

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;

ll solve(vector<ll>& d, ll n){
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (d[n] != -1) return d[n];
    ll res = 0;
    for(int i = 1; i <= 6; i++){
        res += solve(d, n - i),
        res %= M;
    }
    return d[n] = res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    ll n;
    cin >> n;

    vector<ll> d(n + 1, -1);
    cout << solve(d, n);

    return 0;
}
