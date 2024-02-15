#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int effSec(int arr[] , int n ) { //takes O(1) time

	int largest = 0 , seclarge = -1;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > arr[largest]) {
			seclarge = largest;
			largest = i;
		}
		else if (arr[i] != arr[largest]) {// that means smaller or equal as we already checked greater vala
			if (seclarge == -1 || arr[i] > arr[seclarge])
				seclarge = i;
		}
	}
	return seclarge;
}

/*int naiveSec(int arr[] ,  int n ) { //this approach takes O(n) time
	int maxx = *max_element(arr , arr + n);
	int secmax = -1;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != maxx) {
			if (secmax == -1)
				secmax = i;
			if (arr[i] > arr[secmax])
				secmax = i;
		}
	}
	return secmax;
}*/


int main()
{
	int n = 4;
	int arr[n] = {10 , 10 , 10 , 10};  //should return -1 as there is no 2nd largest
	// cout << naiveSec(arr , n);
	cout << effSec(arr , n);
	return 0;
}