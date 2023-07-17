#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int gcd(int a , int b) {  // optimised euclid algo
	if (b == 0) return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int a , b;
	cin >> a >> b;
	// int res = min(a, b);

	cout << gcd(a , b);


	/*while (a != b) {    //euclid algo
		if (a > b) a = a - b;
		else
			b = b - a;
	}
	cout << a;*/



	/*while (res > 0) {   // naive sol
		if (a % res == 0 && b % res == 0) {
			break;
		}
		else
			res--;
	}

	cout << res;*/

	return 0;
}