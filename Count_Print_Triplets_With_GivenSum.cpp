#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
/*int getTriplet(vector<int>&v , int x) { //This will print all and give count of all , including duplicates
	int n = v.size();
	sort(v.begin() , v.end());
	int count = 0 ;
	for (int i = 0; i < n; i++) {

		int l = i + 1, r = n - 1;
		while (l < r) {
			int total = v[i] + v[l] + v[r];
			if (total == x)
			{
				cout << v[i] << " " << v[l] << " " << v[r] << nline;
				count++;
				l++;
				r--;
			}

			else if (total > x)
				r--;
			else
				l++;
		}
	}
	return count;
}*/
int UniqueTriplet(vector<int>&v , int x) { // this gives unique triplets //similar as 3 sum problem
	int n = v.size();
	sort(v.begin() , v.end());
	int count = 0;
	for (int i = 0 ; i < n ; i++) {
		if (i > 0 && v[i] == v[i - 1])
			continue;
		int l = i + 1 , r = n - 1;
		while (l < r) {
			int total = v[i] + v[l] + v[r];
			if (total == x) {
				cout << v[i] << " " << v[l] << " " << v[r] << nline;
				count++;
				l++;
				r--;

				while (l < r && v[l] == v[l - 1]) l++;
				while (l < r && v[r] == v[r + 1]) r--;
			}
			else if ( total > x )
				r--;
			else
				l++;
		}
	}
	return count;
}
int main()
{
	vector<int>v = { 0, -1 , 2, -3, 1 , -3};
	int x = -2;

	// cout << getTriplet(v , x);
	cout << UniqueTriplet(v , x);


	return 0;
}