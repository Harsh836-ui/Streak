#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int findMin(vector<int>& v) {
	int l = 0 , h = v.size() - 1;
	int ans = INT_MAX;
	while (l <= h) {
		int mid = (l + h) / 2;

		if (v[mid] >= v[l])
		{
			ans = min(v[l] , ans);
			l = mid + 1;
		}
		else
		{
			ans = min(v[mid] , ans);
			h = mid - 1;
		}
	}
	return ans;
}
int main()
{
	vector<int>v = { 4 , 5 , 1 , 2 , 3};
	cout << findMin(v);


	return 0;
}