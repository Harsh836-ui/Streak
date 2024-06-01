#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int normalMaxSum(int arr[] , int n ) { //kadane's
	int maxend = arr[0];
	int maxsm = arr[0];

	for (int i = 1 ; i < n ; i++) {
		maxend = max(maxend + arr[i] , arr[i]);
		maxsm = max(maxsm , maxend);
	}
	return maxsm;

}

int overallMaxSum(int arr[] , int n ) {
	int max_normal = normalMaxSum(arr , n); //Normal sum

	if (max_normal < 0)   //that means all elements are negative then that fn will give me largest value so return that
		return max_normal;
	//Circular sum
	int arr_sum = 0 ;
	for (int i = 0; i < n; i++)
	{
		arr_sum += arr[i];
		arr[i] = -arr[i];
	}
	int max_circular = arr_sum + normalMaxSum(arr , n);  //we did + cuz this fun will return in opposite sign so in idea we did total - min so that becomes total -(-min)

	return max(max_normal , max_circular);
}

int main()
{
	int arr[] = {5 , -3 , 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << overallMaxSum(arr , n);

	return 0;
}