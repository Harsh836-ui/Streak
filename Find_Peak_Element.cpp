#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int findPeakElement(vector<int>& v) {
	int n = v.size();
	if (n == 1) return 0;
	if (v[0] > v[1]) return 0;
	if (v[n - 1] > v[n - 2]) return n - 1;

	int l = 1 , h = n - 2 ;
	while (l <= h) {
		int mid = (l + h) / 2;
		if ((v[mid] > v[mid + 1]) && (v[mid] > v[mid - 1]))
			return mid;

		else if (v[mid] > v[mid - 1])
			l = mid + 1;
		else
			h = mid - 1;
	}
	return -1;
}
int main()
{
	vector<int>v = {1, 2, 1, 3, 5, 6, 4}; //has multiple peaks but return any 1 index
	cout << findPeakElement(v);


	return 0;
}