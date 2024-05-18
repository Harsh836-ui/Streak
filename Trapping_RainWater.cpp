#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffWaterTrapped(int arr[] , int n) {
	int res = 0 ;
	int lmax[n] ,  rmax[n];

	lmax[0] = arr[0];
	for (int i = 1 ; i < n ; i++) {
		lmax[i] = max(arr[i] , lmax[i - 1]);
	}

	rmax[n - 1] = arr[n - 1];
	for (int i = n - 2 ; i >= 0 ; i--) {
		rmax[i] = max(arr[i] , rmax[i + 1]);
	}

	for (int i = 1 ; i < n - 1 ; i++)
		res += min(lmax[i] , rmax[i]) - arr[i];

	return res;
}
/*int NaWaterTrapped(int arr[] , int n ) {
	int TotalWater = 0;

	for ( int i = 1 ; i < n - 1 ; i++) { //outer loop excluding 1st and last as you must be in middle of some to hold water on your own

		int mL = 0 , mR = 0;

		for (int j = 0 ; j < i ; j++) { //to find max height in left of current
			mL = max(mL , arr[j]);
		}

		for (int j = i + 1 ; j < n ; j++) { //max height in right of current
			mR = max(mR , arr[j]);
		}

		int currWater = min(mL , mR) - arr[i];

		if (currWater > 0) TotalWater += currWater;

	}

	return TotalWater;
}*/
int main()
{

	int arr[] = {8 , 8 , 2 , 4 , 5 , 5 , 1};
	int n = 7;

	// cout << NaWaterTrapped(arr , n);
	cout << EffWaterTrapped(arr , n);
}