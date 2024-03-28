#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void lRotate1(int arr[] , int n ) {
	int temp = arr[0];
	for (int i = 0; i < n - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = temp;
}

int main()
{
	int n = 5;
	int arr[n] = {1 , 2, 3 , 4 , 5};

	lRotate1(arr , n);
	for (auto it : arr) {
		cout << it << " ";
	}
	return 0;
}