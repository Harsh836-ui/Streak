#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int EffRemDup(int arr[] , int n) {
	int res = 1;

	for (int i = 1; i < n; i++)
	{
		if (arr[res - 1] != arr[i])
		{
			arr[res] = arr[i];
			res++;
		}
	}

	return res;
}
/*int NaivRemDup(int arr[] , int n) { // Using Extra space:
	int temp[n];
	temp[0] = arr[0];

	int res = 1 ;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] != temp[res - 1])
		{
			temp[res] = arr[i];
			res++;
		}
	}

	for (int i = 0; i < res; ++i)
	{
		arr[i] = temp[i];  //Modifying array
	}

	return res; //Number of Distinct Elements
}*/
int main()
{
	int n = 7;
	int arr[n] = {10 , 20 , 20 , 30 , 30 , 30 , 30}; //Original array

	n = EffRemDup(arr , n); //To get new n

	cout << "After Removing:" << nline;
	//Note: elements are still there we just print till 3 , for eg our original array will become something like : 10 20 30 30 30 30
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}


	return 0;
}