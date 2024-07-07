#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
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
/*int RecLastOcc(vector<int>&v , int l , int h , int x) { //Recursive
	int n = v.size();
	if (l > h) return -1;
	int mid = (l + h) / 2;
	if (v[mid] == x) {
		if (mid == n-1 || v[mid + 1] != x)
			return mid;
		else
			return RecLastOcc(v , mid + 1 , h , x);
	}
	else if (v[mid] > x)
		return RecLastOcc(v , l , mid - 1 , x);
	else
		return RecLastOcc(v , mid + 1 , h , x);
}*/
int main()
{
	vector<int>v = {5, 5, 5};

	int x = 5 ;

	// cout << RecLastOcc(v , 0 , 2 , x);
	cout << IteLastOcc(v , x);


	return 0;
}