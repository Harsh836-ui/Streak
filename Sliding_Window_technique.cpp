#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int effMaxSum(vector<int>v, int k ) { //sliding window
	int n = v.size();
	int curr_sum = 0 ; int max_sum = INT_MIN;
	for (int i = 0 ; i < k ; i++) { //initial window
		curr_sum += v[i];
	}
	max_sum = curr_sum;
	for (int i = k ; i < n ; i++) {
		curr_sum = curr_sum + v[i] - v[i - k ];

		max_sum = max(max_sum , curr_sum);
	}
	return max_sum;
}
/*int NaiMaxSUm(vector<int>v , int k) {
	int n = v.size();
	int res = 0;
	for (int i = 0 ; i <= n - k ; i++) {
		int sum = 0;
		for (int j = i ; j < i + k; j++) {
			sum += v[j];
		}
		res = max(res , sum);
	}
	return res;
}*/
int main()
{
	vector<int>v = {5 , -10 , 6 , 90 , 3};
	int k = 2;

	// cout << NaiMaxSUm(v , k);
	cout << effMaxSum(v , k);

	return 0;
}