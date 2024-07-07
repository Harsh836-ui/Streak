#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int BinSearch(vector<int>v , int l , int h , int target) {
	if (l > h) return -1; //base case
	int mid = (l + h) / 2;

	if (v[mid] == target)
		return mid;
	else if (v[mid] > target)
		return BinSearch(v , l , mid - 1 , target);
	else
		return BinSearch(v , mid + 1 , h , target);
}
int main()
{
	vector<int>v = {10 , 20 , 30 , 40 , 50 , 60};
	int target = 60;
	int l = 0 , h = 5;

	cout << BinSearch(v , l , h , target);
	return 0;
}