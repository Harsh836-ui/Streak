#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool isPal(int n) {
	int temp = n;
	int rev = 0; int ld;

	while (temp != 0) {
		ld = temp % 10;
		rev = rev * 10 + ld;
		temp = temp / 10;


	}
	return (rev == n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	if (isPal(n) == 1) cout << "Palindrome";
	else cout << "Not a palindrome";

	return 0;
}