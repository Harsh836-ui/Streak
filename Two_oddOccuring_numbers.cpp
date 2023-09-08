#include<bits/stdc++.h>
using namespace std;
#define nline "\n"


int main()
{
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	long int xors = 0;
	for (int i = 0; i < n; ++i)
	{
		xors = xors ^ arr[i];
	}

	long int rsb = xors & ~(xors - 1); //Rightmost set bit

	int group1 = 0 ; int group2 = 0;
	for (auto x : arr) {
		if ( x & rsb) group1 ^= x;     //dont do rsb & x as it will give different result
		else
			group2 ^= x;
	}

	cout << group1 << " " << group2;


	/*unordered_map<int , int > hash;  //Hashing
	for (int i = 0; i < n; ++i)
	{
		hash[arr[i]]++;
	}

	for (auto x : hash) {
		if (x.second % 2 != 0) cout << x.first << " ";
	}*/

	/*for (int i = 0; i < n; ++i)       //Brute Force
	{	int count = 0;
		for (int j = 0; j < n; ++j)
		{
			if (arr[i] == arr[j]) count++;
		}
		if (count % 2 != 0) cout << arr[i] << " ";
	}*/

	return 0;
}