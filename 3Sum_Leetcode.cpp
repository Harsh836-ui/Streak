#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
vector<vector<int>> Threesum(vector<int>&v) {
	vector<vector<int>>res;
	int n = v.size();
	sort(v.begin() , v.end());
	for (int i = 0 ; i < n ; i++) {
		if (i > 0 && v[i] == v[i - 1])
			continue;

		int j = i + 1 , k = n - 1;
		while ( j < k) {
			int total = v[i] + v[j] + v[k];
			if (total == 0) {
				res.push_back({v[i] , v[j] , v[k]});
				j++;
				k--;

				while (j < k && v[j] == v[j - 1]) j++;
				while (j < k && v[k] == v[k + 1]) k--;
			}
			else if (total > 0)
				k--;
			else
				j++;
		}
	}
	return res;
}
int main()
{

	vector<int> v = { -1, 0, 1, 2, -1, -4};

	vector<vector<int>>ans = Threesum(v);
	for (auto it : ans) {
		for (auto x : it) {
			cout << x << " ";
		}
		cout << nline;
	}


	return 0;
}