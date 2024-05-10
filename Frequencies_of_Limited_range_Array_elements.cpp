//---GFG PROBLEM PRACTICE----
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void countFreq(int arr[] , int n , int p ) {
	unordered_map<int , int>hash;
	for (int i = 0; i < n; ++i)
	{
		hash[arr[i]]++;
	}

	/*for (int i = 1 ; i <= p ; i++) {
		cout << i << " " << hash[i] << nline;
	}*/

	for (int i = 1; i <= n; ++i) //in gfg problem you have to return original array so do arr[i-1] = hash[i]

	{
		cout << hash[i] << " ";
	}
}

int main()
{

	int n = 4;
	int p = 3;
	int arr[n] = {3 , 3 , 3, 3};

	countFreq(arr, n , p );

	return 0;
}