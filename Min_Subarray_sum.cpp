#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int MinSum(int arr[] , int n) {
	int maxend = arr[0];
	int maxsm = arr[0];

	for (int i = 1 ; i < n ; i++) {
		maxend = max(maxend + arr[i] , arr[i]);
		maxsm = max(maxsm , maxend);
	}
	return -maxsm;
}

int main()
{
	int arr[] = {8 , -4 , 3 , -5 , 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; ++i)
	{
		arr[i] = -arr[i];   //inverting array elements
	}
	cout << MinSum( arr , n);

	return 0;
}