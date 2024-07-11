#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int countZeroes(vector<int> &v , int n) {
	int l = 0 , h = n - 1;
	while (l <= h) {
		int mid = (l + h) / 2;
		if (v[mid] == 0)
		{
			if (mid == 0 || v[mid - 1] != 0)
				return  n - mid ;
			else
				h = mid - 1;
		}
		else
			l = mid + 1;
	}
	return 0;
}
int main()
{

	vector<int>v = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
	int n = v.size();
	cout << countZeroes(v , n);

	return 0;
}