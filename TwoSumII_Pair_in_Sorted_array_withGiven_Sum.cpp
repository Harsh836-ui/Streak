//For Sorted Array
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void TwoPointer(vector<int>&v , int x) {
	int l = 0 , r = v.size() - 1;
	while (l < r) {

		if (v[l] + v[r] == x) {
			cout << l << " " << r;
			return; // Return after finding first pair
		}
		else if (v[l] + v[r] > x) r--;
		else l++;
	}
	cout << "No Pair Found";
}
int main()
{
	vector<int>v = { 2 , 5 , 8 , 12 , 30};
	int x = 17;

	TwoPointer(v , x);


	return 0;
}