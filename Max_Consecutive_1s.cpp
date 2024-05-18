#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	vector<int> v = {1 , 1 , 0 , 1 , 1 , 1}; int n = v.size();
	int res = 0 ; int  count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == 0)
			count = 0;

		else
		{
			count++;
			res = max (res , count);
		}
	}
	cout << res;
	return 0;
}