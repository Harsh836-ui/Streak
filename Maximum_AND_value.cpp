#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int n = 4;
	int arr[n] = {4 , 8 , 16 , 2};
	int res = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			res = max(res, arr[i] & arr[j]);



	cout << res;
	return 0;
}