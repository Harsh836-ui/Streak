#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
/*bool  IsPrime(int n) {

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

void prime_factors(int n ) {     //NAIVE SOLUTION
	for (int i = 2; i <= n; ++i)
	{
		if (IsPrime(i)) {
			int x = i;
			while (n % x == 0) {
				cout << i << " ";
				x = x * i;
			}
		}
	}
}*/

/*void prime_factors(int n ) {     //Efficient SOLUTION
	if (n <= 1)return; //as they have no PF
	for (int i = 2; i * i <= n; ++i)
	{
		while (n % i == 0) {
			cout << i << " ";
			n = n / i;
		}
	}
	if (n > 1) cout << n; //Corner Case
}*/

void prime_factors(int n ) {     //MOST Efficient SOLUTION
	if (n <= 1)return;
	while (n % 2 == 0) {
		cout << 2 << " ";
		n = n / 2;
	}
	while (n % 3 == 0) {
		cout << 3 << " ";
		n = n / 3;
	}
	for (int i = 5; i * i <= n; i = i + 6)
	{
		while (n % i == 0) {
			cout << i << " ";
			n = n / i;
		}
		while (n % (i + 2) == 0) {
			cout << (i + 2) << " ";
			n = n / (i + 2);
		}
	}

	if (n > 3) cout << n; //Corner Case
}

int main()
{
	int n ; cin >> n;
	prime_factors(n);
	return 0;
}