#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int IterBinarySearch(vector<int>v , int x) {
	int n = v.size();
	int low = 0 , high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;

		if (v[mid] == x) return mid;
		else if (v[mid] > x) high = mid - 1;
		else
			low = mid + 1;

	}
	return -1;
}
int main()
{
	vector<int>v = {10 , 20 , 30 , 40 , 50 , 60 , 70};
	int target = 60;

	cout << IterBinarySearch(v , target);


	return 0;
}