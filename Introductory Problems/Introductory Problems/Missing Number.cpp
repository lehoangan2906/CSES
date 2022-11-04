// problem statements:  cses.fi/problemset/task/1083

// The sum of all the natural numbers up to a certain N can be calculated by
// the expression Sum = (n*(n + 1))/2

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lli = long long int;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;
lli n, input, sum = 0;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n - 1; i++){
        cin >> input; 
        sum += input;
    }

    cout << (n * (n + 1))/2 - sum << "\n";
    
    return 0;
}


