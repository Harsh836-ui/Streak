#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

bool effisSort(int arr[] , int n) {
	for (int i = 1; i < n; ++i) //start from 2nd element
	{
		if (arr[i] < arr[i - 1])
			return false;
	}
	return true; //if it never went inside if condn that means was sorted
}

/*bool isSorted(int arr[] , int n ) {
	int k = true; //let is sorted

	for ( int i = 0 , j = 1; i < n && j < n ; i++ , j++) {
		if (arr[i] > arr[j])
			k = false;
	}
	return k;
}
*/
int main()
{
	int n = 5;
	int arr[n] = {1 , 2 , 3 , 4 , 5};

	if (effisSort(arr , n)) cout << "Array is Sorted";
	else cout << "Array not sorted";
	return 0;
}