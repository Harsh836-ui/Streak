//149 -> 14 -> 5 till you get single digit num
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

sum(int n) {
	int res = 0; int x;
	while (n > 0) {
		x = n % 10;
		res += x;
		n = n / 10;
	}
	return res;
}
int main()
{
	int x; cin >> x;
	int res = 0;

	res =  sum(x);
	res = sum(res);

	if (res >= 10) cout << (res - 9); //Corner Case
	else cout << res;
	return 0;
}