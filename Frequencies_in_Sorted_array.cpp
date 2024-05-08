#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void CountfreqMy( int arr[] , int n )
{
	int count = 1;
	for (int i = 0; i < n; ++i)
	{
		if (i < n && arr[i] == arr[i + 1])
			count++;

		else {
			cout << arr[i] << " " << count;
			cout << nline;
			count = 1;
		}
	}
}

/*void CountFreqSJ(int arr[] ,  int n )
{
	int count = 1 ; int i = 1;
	while (i < n) {
		while (i < n && arr[i] == arr[i - 1])
		{
			count++ ; i++;
		}

		cout << arr[i - 1] << " " << count;
		cout << nline;
		i++; count = 1;

	}
	if (n == 1 || arr[n - 1] != arr[n - 2])  //edge case
		cout << arr[n - 1] << " " << 1;
}*/
int main()
{

	int arr[] = {10 , 10 , 10 , 25 , 30 , 30};
	int n = sizeof(arr) / sizeof(arr[0]);

	CountfreqMy(arr , n); //My method simple
	// CountFreqSJ(arr , n); //method in video by sandeep jain sir using while

	return 0;
}
