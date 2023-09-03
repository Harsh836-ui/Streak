#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int countSetBits(int n) {
	int count = 0;
	for (int i = 1; i <= 32; ++i)
	{
		if ((n >> (i - 1) & 1) != 0)
			count++;
	}
	return count;
}
int main()
{
	int n ; cin >> n;
	cout << countSetBits(n);

	return 0;
}