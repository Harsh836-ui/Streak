#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void kthBit(int n , int k) {
	/*Using Left Shift
	if (n & (1 << (k - 1)) != 0)
		cout << "Yes";
	else
		cout << "No";*/

	//Using Right Shift
	if ((n >> (k - 1) & 1) != 0)
		cout << "Yes";
	else
		cout << "No";
}
int main()
{
	int n , k;
	cin >> n >> k;

	kthBit(n , k);


	return 0;
}