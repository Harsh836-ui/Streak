
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int GivenSum(vector<int>v, int k , int target) { //sliding window
	int n = v.size();
	int curr_sum = 0 ; int max_sum = INT_MIN;
	for (int i = 0 ; i < k ; i++) { //initial window
		curr_sum += v[i];
	}

	for (int i = k ; i < n ; i++) {
		curr_sum = curr_sum + v[i] - v[i - k ];

		if (curr_sum == target)  return 1;
	}
	return 0;
}

int main()
{
	vector<int>v = {5 , -10 , 6 , 90 , 3};
	int k = 2; int target_sum = 96;

	int res = GivenSum(v , k , target_sum);
	if (res == 1)cout << "yes";
	else
		cout << "no";

	return 0;
}