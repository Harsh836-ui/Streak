#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int SubarraySum(vector<int>v , int k ) {
	int n = v.size();
	unordered_map<int, int>hash;
	int count = 0 , psum = 0;
	for (int i = 0 ; i < n ; i++) {
		psum += v[i];
		if (psum % k == 0) count++;
		int rem = psum % k;
		if (rem < 0) rem += k;
		if (hash.find(rem) != hash.end()) count += hash[rem];
		hash[rem]++;
	}
	return count;
}
int main()
{

	vector<int> v = {4 , 5 , 0 , -2 , -3  , 1};
	int k = 5;

	cout << SubarraySum(v , k);

	return 0;
}