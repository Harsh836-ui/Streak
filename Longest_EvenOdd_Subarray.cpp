#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffLongestEO(int arr[] , int n ) { //Kadane's
	int res = 1; int curr = 1;
	for (int i = 1 ; i < n ; i++) {
		if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
			curr++;
			res = max(res , curr);
		}
		else
			curr = 1; //start new subarray
	}
	return res;
}
/*int NalongestEO(int arr[] , int n) {
	int res = 1 ;
	for (int i = 0; i < n; ++i)
	{
		int curr = 1 ;
		for (int j = i + 1; j < n; ++j)
		{
			if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0)  ||
			        (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
			{
				curr++;
			}
			else
				break;

		}
		res = max (res , curr);
	}
	return res;
}*/
int main()
{
	int arr[] = {10 , 12 , 15 , 16 , 14};
	int n = sizeof(arr) / sizeof(arr[0]);

	// cout << NalongestEO(arr , n);
	cout << EffLongestEO(arr , n);


	return 0;
}