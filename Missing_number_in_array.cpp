#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{

	int arr[] = {1 , 5 , 2 , 3 , 4};
	int n = 5;
//---------------XOR METHOD----------------------------
	int res1 = 0; int res2 = 0;
	for (int i = 0; i < n; ++i)
	{
		res1 = res1 ^ arr[i];
	}
	for (int i = 1; i <= n + 1 ; ++i)
	{
		res2 = res2 ^ i;
	}

	cout << (res1 ^ res2);
	/*  -----------------OTHER METHOD----------------------:
		int sumOfN; int sumOfArr = 0;
		sumOfN = ((n + 1) * (n + 2)) / 2;

		for (int i = 0; i <  n; ++i)
		{
			sumOfArr += arr[i];
		}

		cout << sumOfN - sumOfArr;*/
	return 0;
}