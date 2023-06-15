#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

/*countDigits(int n) {    //Iterative solution
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}*/

/*countDigits(int n) {     //recursive solution

	if (n == 0)
		return 0;
	return 1 + countDigits(n / 10);
}*/

countDigits(int n) {            //logarithmic solution fastest
	return floor(log10(n) + 1);
}

int main() {
	int n;
	cin >> n;

	cout << countDigits(n);
}