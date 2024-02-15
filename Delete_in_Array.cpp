#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void printArr(int arr[] , int n ) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << nline;
}

int DeleteEle(int arr[] , int x , int n ) {
	int i;
	for ( i = 0; i < n; ++i)
		if (arr[i] == x ) break;

	if (i == n) return n;

	for (int j = i + 1 ; j < n ; j++)
		arr[j - 1] = arr[j];


	return n - 1;
}
int main()
{
	int arr[5] = {3 , 8 , 12 , 5 , 6};
	int x = 8; int n = 5;

	printArr(arr , n);//Print the original array
	n = DeleteEle(arr , x , n);
	printArr(arr , n); //array after deleting element x if present

	return 0;
}