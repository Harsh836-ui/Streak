#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

bool containsDupli(int arr[] , int n) {

	unordered_map<int , int > h;
	for (auto x : arr) {
		h[x]++;
	}

	for (auto e : h) {
		if (e.second > 1) return true; break;
	}
	return false;
}
int main()
{
	int arr[ ] = {1 , 2, 3 , 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << containsDupli(arr , n);


	return 0;
}