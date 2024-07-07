#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int ItefirstOcc(vector<int>&v, int x) {
	int l = 0 , h = 2;
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
/*int RecfirstOcc(vector<int>&v , int l , int h , int x) { //Recursive
	if (l > h) return -1;
	int mid = (l + h) / 2;
	if (v[mid] == x) {
		if (mid == 0 || v[mid - 1] != x)
			return mid;
		else
			return RecfirstOcc(v , l , mid - 1 , x);
	}
	else if (v[mid] > x)
		return RecfirstOcc(v , l , mid - 1 , x);
	else
		return RecfirstOcc(v , mid + 1 , h , x);
}*/
int main()
{
	vector<int>v = {5, 5, 5};

	int x = 5 ;

	// cout << RecfirstOcc(v , 0 , 2 , x);
	cout << ItefirstOcc(v , x);


	return 0;
}