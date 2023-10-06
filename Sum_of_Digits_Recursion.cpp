#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int sumDigits(int n) {
	if (n <= 9) return n; //or we can say if n==0 return 0 but it take some more time

	return  sumDigits(n / 10) +  (n % 10);
}
int main()
{

	cout << sumDigits(9987);

	return 0;
}