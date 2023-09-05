#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int countSetBits(int n) {
	int count = 0;
	/*for (int i = 1; i <= 32; ++i)  //My Solution
	{
		if ((n >> (i - 1) & 1) != 0)
			count++;
	}*/

	/*while (n > 0) { //Check if last bit set , increment res if set else divide by 2 or remove last bit
		if (n & 1)
			count++;

		n = n >> 1;
	}*/

	/*while (n > 0) {   //BRIAN KERNINGAM'S ALGO
		n = n & (n - 1);
		count++;
	}*/
	return count;
}
int main()
{
	int n ; cin >> n;
	cout << countSetBits(n);

	return 0;
}