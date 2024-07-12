#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int EffSqrt(int n) {
	if (n == 0 || n == 1)return n;
	int l = 1 , h = n ;
	while (l <= h) {
		long int mid = l + (h - l) / 2;
		if (mid * mid == n) return mid;
		else if (mid * mid > n) h = mid - 1;
		else l = mid + 1;
	}
	return h;

}
/*int NaSqrt(int n) {
	int i = 1 ;
	while (i * i <= n)
		i++;

	return i - 1;
}*/

int main()
{
	int n ;
	cin >> n;

	cout << EffSqrt(n);
	// cout << NaSqrt(n);

	return 0;
}