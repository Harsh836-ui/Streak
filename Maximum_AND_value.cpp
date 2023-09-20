#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int checkBits(int arr[] , int mask , int n ) {
	int count = 0;
	for (int i = 0; i < n; ++i) //Checking that mask for all array elements
	{
		if ((mask & arr[i]) == mask)
		{
			count++;
		}
	}
	return count;
}
int MaxAndvalue(int arr[] , int n) {
	int mask = 0; int res = 0;
	for (int i = 31 ; i >= 0 ; i--) { //covers till 2^32 bit numbers
		mask = (1 << i) | res;
		int count = checkBits(arr , mask , n);

		if (count >= 2)
		{
			res = res | mask;
		}
	}
	return res;
}

int main()
{

	int arr[] = {16 , 9 , 6 , 13};
	int n = sizeof(arr) / sizeof(arr[0]);
	/*int res = 0; //naive
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			res = max(res, arr[i] & arr[j]);
	cout << res;*/

	cout << MaxAndvalue(arr , n);

	return 0;
}