#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

CountTZ(int n ) {
	int res = 0;
	for (int i = 5; i <= n; i *= 5)
	{
		res = res + (n / i);
	}
	return res;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	cout << CountTZ(n);


	return 0;
}
