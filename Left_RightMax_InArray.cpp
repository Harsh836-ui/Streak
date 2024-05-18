#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int n = 5; int arr[5] = {5 , 0 , 6 , 2 , 3 };
	int lmax[n] , rmax[n];

	lmax[0] = arr[0];
	for (int i = 1 ; i < n ; i++) {
		lmax[i] = max(arr[i] , lmax[i - 1]);
	}

	rmax[n - 1] = arr[n - 1];
	for (int i = n - 2 ; i >= 0 ; i--) {
		rmax[i] = max(arr[i] , rmax[i + 1]);
	}

	for (auto it : lmax) {
		cout << it << " ";
	}
	cout << nline;
	for (auto it : rmax) {
		cout << it << " ";
	}

	return 0;
}