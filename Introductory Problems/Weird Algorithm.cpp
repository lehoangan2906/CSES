// problem statements:  cses.fi/problemset/task/1608


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;
ll mxN = 1e6;
ll n;

void solve(ll a){
    if (a == 1){
        return;
    }

    if (a % 2 == 0){
        a /= 2;
        cout << a << " ";
        solve(a);
    }else{
        a = (a*3) + 1;
        cout << a << " ";
        solve(a);
    }
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    cout << n << " ";
    solve(n);


    return 0;
}


