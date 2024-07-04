#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
SubarraySumEq(vector<int>v , int k) {
	int n = v.size();
	int left = 0 , currsum = 0;
	for (int right = 0 ; right < n ; right++) {
		currsum += v[right];

		while (currsum > k && left <= right) {
			currsum -= v[left];
			left++;
		}

		if (currsum == k) {
			cout << "Subarray Present from " << left << " to " << right;
			return 1;
		}
	}
	cout << "Not present";
	return 0;
}
int main()
{

	vector<int>v = {1 , 3 , 2 , 5 , 1 , 1 , 2 , 3};
	int target = 8;

	SubarraySumEq(v , target);

	return 0;
}