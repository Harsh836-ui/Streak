#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffEquiPoint(vector<int>v) {
	int n = v.size();

	int total_sum = 0;
	for (int i = 0 ; i < n ; i++) {
		total_sum += v[i];
	}
	int left_sm = 0 , right_sm = total_sum;
	for (int i = 0 ; i < n ; i++) {
		right_sm -= v[i];
		if (right_sm == left_sm)
			return i + 1;
		left_sm += v[i];
	}
	return -1;

}
/*int NaEquiPoint(vector<int>v) {
	int n = v.size();

	for (int i = 0 ; i < n ; i++) {
		int lsum = 0 , rsum = 0 ;
		for (int l = 0 ; l < i ; l++)
			lsum += v[l];
		for (int r = i + 1 ; r < n ; r++)
			rsum += v[r];

		if (lsum == rsum) return i + 1;
	}
	return -1;
}*/
int main()
{
	vector<int>v = {1 , 2 , 0 , 2 , 1};
	// cout << NaEquiPoint(v);
	cout << EffEquiPoint(v);

	return 0;
}