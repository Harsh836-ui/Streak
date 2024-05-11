#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int pfSum(int arr[] , int n) {
	int pf[n]; pf[0] = arr[0];
	for (int i = 1; i < n; ++i)
	{
		pf[i] = pf[i - 1] + arr[i];
	}

	if (pf[n - 1] == 1 ) return 1 ; //edge case : as if we get array like {1} , {1, 0} we have to return 1 , but code was returning -1 , so in other words if sum of array elements is 1 return 1

	for (int i = 1; i < n; ++i)
	{
		if ((pf[i] + pf[i - 1]) == pf[n - 1])
			return i + 1;
	}
	return -1;
}
/*
int  EquiNaive(int arr[] , int n) { //will Give TLE
	int sumL, sumR ;
	for (int i = 0; i < n; ++i)
	{
		sumL = 0; sumR = 0;
		for (int j = 0; j < i ; ++j) {
			sumL += arr[j];
		}
		for (int k = i + 1; k < n ; ++k) {
			sumR += arr[k];
		}

		if (sumL == sumR) return  i + 1;
	}
	return -1;
}*/
int main()
{

	int arr[] = { 1 , 0 , 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	// cout << EquiNaive(arr , n);
	cout << pfSum(arr , n );




}