#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int modInverse(int a, int m) {
	a = a % m; //ensure that a is within the range [0, m-1]
	for (int x = 1; x < m; x++) {
		if ((a * x) % m == 1) {
			return x;
		}
	}
	return -1; // Inverse doesn't exist
}

int main()
{

	/*int a, b ;    //For Additive and Multiplication
	cin >> a >> b ;
	int res1, res2, res3 ;  int m = 5;
	res1 = (a + b) % m; //(a%m+b%m) % m
	res2 = ((a % m) * (b % m)) % m; //((a%m)*(b%m))%m
	cout << res2;*/

	/*------------------For Multiplicative modulo inverse----------------
		(A * X) mod M = 1 : here x is ans */

	int a , m ;
	cin >> a >> m;
	int mmi = modInverse(a, m);
	if (mmi != -1) {
		cout << mmi;
	} else {
		cout << "Inverse does not exist";
	}

	return 0;
}