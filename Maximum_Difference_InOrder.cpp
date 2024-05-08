//we need to find maximum value of arr[j] - arr[i] such that j>i

#include<bits/stdc++.h>
using namespace std;
#define nline "\n"


int main()
{
	int arr[] = {2 , 3 , 10 , 6 , 4 , 8 , 1};
	int n = sizeof(arr) / sizeof(arr[0]);


	int res = arr[1] - arr[0];
	int minval  = arr[0];

	for (int i = 1; i < n; ++i)
	{
		res = max(res , arr[i] - minval);
		minval = min ( minval , arr[i]);
	}

	cout << res;
	return 0;
}