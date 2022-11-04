// problem statements:  cses.fi/problemset/task/1755


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
typedef pair<ll, ll> pll;

const ll M = 1e9 + 7;
string s;
int c[26] = {}, c1 = 0;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> s;
    for (char d : s){
        ++c[d - 'A'];
    }

    for (int i = 0; i < 26; ++i){
        c1 += c[i] & 1;
    }

    // if exist characters with odd occurences > 1 then cannot form a palindrome
    if (c1 > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string t;

    // t will be made of all the letters with even frequencies 
    for (int i = 0; i < 26; ++i){
        if (c[i] & 1^1){
            for (int j = 0; j < c[i]/2; ++j){
                t += (char)('A' + i);
            }
        }
    }
    
    cout << t;
    for (int i = 0; i < 26; i++){
        if (c[i] & 1){
            for (int j = 0; j < c[i]; ++j){
                cout << (char)('A' + i);
            }
        }
    }

    reverse(t.begin(), t.end());
    cout << t;
    return 0;
}


