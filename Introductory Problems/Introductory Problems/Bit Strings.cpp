#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1e9 + 7

int main(){
	int n;
	cin >> n;

	ll s = 1;
	for (int i = 1; i <= n; i++){
		s = 2*s% ((int)MOD);
	}
	cout << s << "\n";
	return 0;
}
