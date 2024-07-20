#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffSingEl(vector<int>&v) { //Using binary search
	int n = v.size();
	if (n == 1) return v[0];
	if (v[0] != v[1]) return v[0];
	if (v[n - 1] != v[n - 2]) return v[n - 1];
	int l = 1 , h = n - 2;
	while (l <= h) {
		int mid = (l + h) / 2;
		if (v[mid] != v[mid - 1] && v[mid] != v[mid + 1])
			return v[mid];
		else if ((mid % 2 == 1 && v[mid - 1] == v[mid]) || mid % 2 == 0 && v[mid + 1] == v[mid])
			l = mid + 1;
		else
			h = mid - 1;
	}
	return -1;
}

/*int Na3(vector<int>&v) { //using XOR
	int ans = 0 ;
	for (auto it : v)
		ans ^= it;

	return ans;
}*/

/*int Na2(vector<int>&v) { //using hashing
	int n = v.size();
	unordered_map<int, int>hash(n);
	for (int i = 0 ; i < n ; i++)
		hash[v[i]]++;

	for (auto it : hash)
		if (it.second == 1) return it.first;
}*/

/*int Na1SingleEl(vector<int>&v) { //Extreme Naive
	int n = v.size();
	if (n == 1) return v[0];
	for (int i = 0 ; i < n ; i++) {
		if (i == 0) {if (v[i] != v[i + 1]) return v[i];}

		else if (i == n - 1) {if (v[i] != v[i - 1]) return v[i];}

		else if (v[i] != v[i - 1] && v[i] != v[i + 1]) return v[i];

	}
}*/
int main()
{
	vector<int>v = { 1 , 1 , 2 , 2 , 3 , 4 , 4 };

	cout << EffSingEl(v);
	// cout << Na1SingleEl(v);
	// cout << Na2(v);
	// cout << Na3(v);



	return 0;
}