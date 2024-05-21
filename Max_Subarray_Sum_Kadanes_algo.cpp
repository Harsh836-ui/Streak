#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffMaxSum(int arr[] , int n) { //Kadanes Algo
	int maxend = arr[0]; //to store max sum ending with this element
	int maxsm = arr[0]; //edge case for efficient approach if array has single element it wont go in loop so return it as max sum

	for (int i = 1 ; i < n ; i++) {
		maxend = max(maxend + arr[i] , arr[i]); //sum ending with this = extending previous or just current
		maxsm = max(maxsm , maxend);
	}
	return maxsm;
}
/*int NaiveMaxSum( int arr[] , int n) {
	int maxsm = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for (int j = i ; j < n ; ++j) {

			sum += arr[j];
			maxsm = max(maxsm , sum);
		}
	}
	return maxsm;
}*/
/*int BruteMaxSum(int arr[] , int n) {
	int maxsm = INT_MIN;

	for (int i = 0 ; i < n ; i++) {
		for (int j = i ; j < n ; j++) {
			int sum = 0;
			for (int k = i ; k <= j ; k++) { //less than equal must
				sum += arr[k];
			}

			maxsm = max(maxsm , sum);
		}
	}
	return maxsm;
}*/
int main()
{
	int arr[] = {1  , 2 , 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	// cout << BruteMaxSum(arr , n);
	// cout << NaiveMaxSum(arr , n);
	cout << EffMaxSum( arr , n);




	return 0;
}