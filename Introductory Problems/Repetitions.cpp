// problem statements:  cses.fi/problemset/task/1069


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;
string s;
int res = 1, i = 0;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> s;
    
    while(i < s.size() - 1){
        int count = 1;

        while(s[i] == s[i + 1]){
            count++;
            i++;
        }

        res  = max(res, count);
        i++;
    }

    cout << res;

    return 0;
}


