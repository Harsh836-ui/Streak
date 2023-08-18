#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

double power(double x, int n) {
	int v = abs(n);
	double  res = 1 ;
	while (v > 0) {

		if (v & 1)
			res = res * x;

		x = x * x;
		v = v >> 1;
	}
	if (n > 0)
		return res;
	else
		return 1 / res;
}

int main()
{
	double x ; cin >> x;
	int n;
	cin >> n;

	cout << fixed << setprecision(5) << power(x, n) ;


	return 0;
}