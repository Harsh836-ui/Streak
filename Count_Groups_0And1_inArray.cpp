#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
//explanation in notes
cnt01Grp(vector<int>v) {
	int n = v.size();
	int curr_grp = v[0];
	int cnt0 = 0 , cnt1 = 0;

	if (curr_grp == 0)cnt0++;
	else cnt1++;

	for (int i = 1 ; i < n ; i++) {
		if (v[i] != curr_grp) {
			if (v[i] == 0)cnt0++;
			else cnt1++;

			curr_grp = v[i];
		}
	}

	cout << cnt0 << " " << cnt1;
}
int main()
{
	vector<int>v = {1 , 1 , 0 , 0 , 0 , 1};

	cnt01Grp(v);
	return 0;
}