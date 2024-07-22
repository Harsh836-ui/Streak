#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
bool findtrip(vector<int>& v , int x) {
	int n = v.size();
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 2; i++) {

		int l = i + 1, r = n - 1;
		while (l < r) {
			if (v[i] + v[l] + v[r] == x)
			{
				cout << v[i] << " " << v[l] << " " << v[r] << nline;
				return true;
			}

			else if (v[i] + v[l] + v[r] > x)
				r--;
			else
				l++;
		}
	}
	return false;
}
int main()
{
	vector<int>v = {2 , 3 , 4 , 8 , 9 , 20 , 40};
	int x = 32;

	findtrip(v , x);
	return 0;
}