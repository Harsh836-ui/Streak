#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int gcd(int a , int b) {
	if (b == 0) return a;
	else
		return gcd(b, a % b);
}


int lcm(int a , int b ) {
	return (a * b) / gcd(a, b);
}
int main()
{
	int a , b;
	cin >> a >> b;

	cout << lcm(a, b);


	/*int res = max(a, b);
	while (true) {   // naive sol
		if (res % a == 0 &&  res % b == 0) {
			cout << res;
			break;
		}
		else
			res++;
	}*/


	return 0;
}