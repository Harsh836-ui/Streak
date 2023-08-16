#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int SumOFprime_factors(int n ) {
	int sum = 0 ;
	if (n <= 1) return -1;
	while (n % 2 == 0) {
		sum += 2;
		n = n / 2;
	}
	while (n % 3 == 0) {
		sum += 3;
		n = n / 3;
	}
	for (int i = 5; i * i <= n; i = i + 6)
	{
		while (n % i == 0) {
			sum += i;
			n = n / i;
		}
		while (n % (i + 2) == 0) {
			sum += (i + 2);
			n = n / (i + 2);
		}
	}

	if (n > 3) sum = sum + n;

	return sum;
}
int main()
{
	int n ; cin >> n;

	int k = 0;


	while (k != 1) {
		if (SumOFprime_factors(n) == n) {
			k = 1;
		}
		n = SumOFprime_factors(n);
	}

	cout << n;

	return 0;
}