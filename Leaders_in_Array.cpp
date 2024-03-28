#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int n = 7;
	int arr[n] = {7 , 10 , 4 , 3 , 6 , 5 , 2};

	int maxx = INT_MIN;
	for (int i = n - 1 ; i >= 0 ; i--) {
		if (arr[i] >= maxx) {
			maxx = arr[i];
			cout << arr[i] << " ";
		}
	}


	return 0;
}