#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
vector<int> replaceElements(vector<int>& arr) {
	int n = arr.size();
	int maxx = arr[n - 1];
	arr[n - 1] = -1;
	// vector<int>neww(n);
	//     neww[n-1] = -1;
	for (int i = n - 2 ; i >= 0 ; i--) {
		// neww[i] = max(arr[i+1] , neww[i+1]);
		int temp = maxx;
		if (maxx < arr[i]) maxx = arr[i];
		arr[i] = temp;
	}

	return arr;
}
int main()
{
	vector<int>v = {17 , 18 , 5 , 4 , 6 , 1};
	replaceElements(v);
	for (auto it : v) {
		cout << it << " ";
	}


	return 0;
}