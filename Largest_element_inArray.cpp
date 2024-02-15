#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int LargestEl(int arr[] , int n) {
	int large = 0; //Let element at 1st index be largest
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > arr[large])
			large = i;  //to store the largest element index
	}

	return large;
}

int main()
{
	int arr[5] = {40 , 887 , 50 , 10 , 1000};
	cout << LargestEl(arr , 5);


	return 0;
}