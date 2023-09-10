#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int n ; cin >> n;
	/*int posi = 1;       O(LOGN)
	while ((n & 1) == 0) {
		posi++;
		n = n >> 1;
	}
	cout << posi;*/

	cout << log2((n & ~(n - 1))) + 1;  //One line O(1)

	return 0;
}