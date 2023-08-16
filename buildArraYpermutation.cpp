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

	int ans[n];
	for (int i = 0; i < n; ++i)
	{
		ans[i] = nums[nums[i]];
	}

	for (auto it : ans) {
		cout << it ;
	}

}