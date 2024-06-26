#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

pfSum(int arr[] , int n) {
	int pf[n]; pf[0] = arr[0];
	for (int i = 1; i < n; ++i)
	{
		pf[i] = pf[i - 1] + arr[i];
	}

	for (auto x : pf) {
		cout << x << " ";
	}
}

int main()
{

	int arr[] = { 1 , 2 , 3 , 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	pfSum(arr , n );

}