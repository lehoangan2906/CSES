// problem statements:  https://cses.fi/problemset/task/1072


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    for(int k = 1; k <=n; k++){
        ll a1 = k*k, a2 = a1 * (a1 - 1)/2;  // a2 = k^2C2  == the possibility of
                                            // choosing 2 place for 2 knights on
                                            // an k*k chess board
        if ( k > 2){
            a2 -= 4*(k - 1) * (k-2);        // https://www.youtube.com/watch?v=RlpM5N-ttcU
        }
        cout << a2 << "\n";
    }

    return 0;
}


