#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int count1s(vector<int>&v , int n ) {
	int l = 0 , h = n - 1;
	while (l <= h) {
		int mid = (l + h) / 2;

		if (v[mid] == 1)
		{
			if (mid == 0 || v[mid - 1] != 1)
				return n - mid; //here n is the first occurrence index of 1
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
	vector<int>v = {0 , 0 , 0 };
	int n = v.size();

	cout << count1s(v , n);

	return 0;
}