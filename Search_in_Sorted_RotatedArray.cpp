#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int search(vector<int>&v , int x ) {
	int l = 0 , h = v.size() - 1;
	while (l <= h) {
		int mid = (l + h) / 2;
		if (v[mid] == x) return mid; //first check if equal to mid

		//now decide which part is sorted

		if (v[mid] >= v[l]) { //left is sorted
			if (x >= v[l] && x < v[mid]) //simply check if x is in sorted part by few comparison
				h = mid - 1;
			else
				l = mid + 1; //if not move to unsorted part
		}

		else {				//right is sorted
			if (x > v[mid] && x <= v[h])
				l = mid + 1;
			else
				h = mid - 1;
		}
	}
	return -1;
}
int main()
{

	vector<int>v = {100 , 500 , 10 , 20 , 30 , 40 , 50};
	int x = 30;

	cout << search(v , x);
	return 0;
}