#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

// int factorial(int n) {
// 	if (n == 0 ) return 1;
// 	return n * factorial(n - 1);
// }
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	// cout << factorial(n);
	int res = 1;
	for (int i = 2; i <= n; ++i)
	{
		res = res * i;
	}
	cout << res;

	return 0;
}