#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

EffPrintGrp(vector<int>v) {
	int n = v.size();

	for (int i = 1 ; i < n ; i++) {
		if (v[i] != v[i - 1]) {
			if (v[i] != v[0])
				cout << "From " << i << " to ";
			else
				cout << i - 1 << nline;
		}
	}
	if (v[n - 1] != v[0])
		cout << n - 1;
}
/*NaPrinGrp(vector<int>v) {
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
	//to print :
	int target;
	if (cnt1 < cnt0) target = 1; else target = 0;

	for (int i = 0; i < n; ++i) { //important concept
		if (v[i] == target && (i == 0 || v[i - 1] != target)) { //if i ==0 its already new group or of if previous element not same as cur then new group
			int start = i;

			while (i < n && v[i] == target) i++;
			int end = i - 1;
			cout << "From " << start << " to " << end << nline;
		}
	}

}*/
int main()
{
	vector<int>v = {1 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0};

	// NaPrinGrp(v); //Naive
	EffPrintGrp(v);
	return 0;
}