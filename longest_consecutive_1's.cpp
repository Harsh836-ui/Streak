#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int maxConsecutiveOnes(int n)
{	int count = 0;
	while (n != 0) {
		n = (n & (n << 1));
		count++;
	}
	return count;
}
int main()
{
	int n ; cin >> n;
	cout << maxConsecutiveOnes(n);
}