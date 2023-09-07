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

	/*unordered_map<int , int > hash;  //Hashing
	for (int i = 0; i < n; ++i)
	{
		hash[arr[i]]++;
	}

	for (auto x : hash) {
		if (x.second % 2 != 0) cout << x.first << " ";
	}*/

	for (int i = 0; i < n; ++i)       //Brute Force
	{	int count = 0;
		for (int j = 0; j < n; ++j)
		{
			if (arr[i] == arr[j]) count++;
		}
		if (count % 2 != 0) cout << arr[i] << " ";
	}

	return 0;
}