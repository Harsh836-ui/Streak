#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

long long int fact(long long int n ) {
	long long int res = 1;
	if (n == 0) return 1 ;
	else
		res =  n * fact(n - 1);

	return res;
}

long long int digits_fact(long long int n) {

	return floor(log10(fact(n)) + 1);
}

int main()
{

	long long int n ; cin >> n;
	cout << digits_fact(n);

	return 0;
}