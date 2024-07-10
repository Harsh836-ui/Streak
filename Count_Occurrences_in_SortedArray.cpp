#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int ItefirstOcc(vector<int>&v, int x) {
	int l = 0 , h = v.size() - 1;
	while (l <= h) {
		int mid = (l + h ) / 2;
		if (v[mid] == x) {
			if (mid == 0 || v[mid - 1] != x)
				return mid;
			else
				h = mid - 1;
		}
		else if (v[mid] > x) h = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
int IteLastOcc(vector<int>&v, int x) {
	int n = v.size();
	int l = 0 , h = n - 1;
	while (l <= h) {
		int mid = (l + h ) / 2;
		if (v[mid] == x) {
			if (mid == n - 1 || v[mid + 1] != x)
				return mid;
			else
				l = mid + 1;
		}
		else if (v[mid] > x) h = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
int main()
{
	vector<int>v = { 1 , 2 , 2 , 2 , 2};
	int x = 2;

	int first = ItefirstOcc(v , x);
	if (first == -1) cout << 0;
	int last = IteLastOcc(v , x );
	cout << last - first + 1;

	return 0;
}