#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

revArray(int arr[] , int n ) {
	for (int i = 0; i < n / 2; ++i)
		swap(arr[i] , arr[n - i - 1]);
}
int main()
{
	int n = 5 ;
	int arr[n] = { 1 , 2 , 3, 4 , 5};

	revArray(arr , n);
	for (auto x : arr) {
		cout << x << " ";
	}
}