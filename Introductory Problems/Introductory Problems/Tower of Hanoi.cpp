// problem statements:  https://cses.fi/problemset/task/2165


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;
int n;

void move (int from, int to, int depth) {
    if (depth == 1){
        cout << from << " " << to << "\n";
        return;
    }

    int other = 6 - from - to;
    move (from, other, depth - 1);
    cout << from << " " << to << "\n";
    move (other, to, depth - 1);
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    cout << (1 << n) - 1 << "\n";
    move (1, 3, n);

    return 0;
}


