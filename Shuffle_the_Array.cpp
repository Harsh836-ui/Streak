#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int n; cin >> n;
	int nums[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}

	int r = n / 2;

	for (int i = 0; i < r; ++i)
	{
		cout <<  nums[i] << " " << nums[i + r] << " ";
	}
	push
	return 0;
}