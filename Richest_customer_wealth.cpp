#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	vector<vector<int>> v;
	vector<int> v1; vector<int> v2; vector<int> v3;
	v1.push_back(1); v1.push_back(5);
	v2.push_back(7); v2.push_back(3);
	v3.push_back(3); v3.push_back(5);
	v.push_back(v1);  v.push_back(v2);	v.push_back(v3);

	int maxx = 0;
	for (auto vtr : v) {
		int sum = 0;
		for (auto it : vtr) {
			sum += it;
		}
		maxx = max(maxx, sum);
	}
	cout << maxx;

	return 0;
}