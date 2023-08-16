#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

bool  IsPrime(int n) {

	if (n == 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0 ) return false;
	for (int i = 5; i * i <= n; i = i + 6)
	{
		if (n % i == 0 || (n % (i + 2) == 0)) {
			return false;

		}
	}
	return true;
}

int main()
{
	int n; cin >> n;
	auto result = IsPrime(n);
	if (n == 1) cout << "Neither Prime Nor Composite";

	else if (result == 0)
		cout << "NOT PRIME";
	else
		cout << "IS PRIME";


	return 0;
}