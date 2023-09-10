#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int count = 0;
	int n ; cin >> n;

	int k = log2(n);
	cout << (1 << k);

	/*while (n > 0) {
		n = n / 2;
		count++;
	}
	cout << (1 << count - 1);*/
	return 0;
}