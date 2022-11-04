// problem statements:  cses.fi/problemset/task/1070


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
    if (n == 1){
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }
    if ( n % 2 == 0){
        for (int i = 2; i <= n; i+=2){
            cout << i << " " ;
        }
        for (int i = 1; i <= n; i+=2){
            cout << i << " ";
        }
    }else{
        for (int i = 2; i <= n; i+=2){
            cout << i << " " ;
        }

        for (int i = 1; i <= n; i+=2){
            cout << i << " ";
        }
    }

}


