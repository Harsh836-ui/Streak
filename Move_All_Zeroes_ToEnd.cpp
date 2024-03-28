#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void EffMoveZero(int arr[] , int n) {
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != 0) {
			swap(arr[i] , arr[count]);
			count++;
		}
	}
}

/*void NaiveMoveZero(int arr[] , int n ) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			for (int j = i + 1 ; j < n ; j++)
				if (arr[j] != 0)
				{
					swap(arr[i] , arr[j]);
					break;
				}

		}
	}
}*/
int main()
{
	int n = 7;
	int arr[n] = {8, 5 , 0 , 10 , 0 , 0, 20};

	// NaiveMoveZero(arr , n);
	EffMoveZero(arr , n);
	for (auto it : arr) {
		cout << it << " ";
	}

	return 0;
}