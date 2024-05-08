#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void countFreq(int arr[] , int n ) {
	unordered_map<int , int>hash;
	for (int i = 0; i < n; ++i)
	{
		hash[arr[i]]++;
	}

	for (auto x : hash) {
		cout << x.first << " " << x.second << nline;
	}
}

int main()
{
	int arr[] = {5 , 2 , 3 , 5, 2 , 2, 1 , 3 , 4 , 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	countFreq(arr , n);

	return 0;
}