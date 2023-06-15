#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
//This code will give factorial of given num
	int res = 1;
	for (int i = 2; i <= n; ++i)
	{
		res = res * i;
	}
	cout << res;

	/*int count = 0;
	while (res % 10 == 0) {
		count++;
	}
	cout << count;*/

	return 0;
}