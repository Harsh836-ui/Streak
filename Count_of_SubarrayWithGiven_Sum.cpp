#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int subarraySum(vector<int>& nums, int k) {
	int psum = 0; int count = 0;
	unordered_map<int, int> hash;
	for (int i = 0; i < nums.size(); i++) {
		psum += nums[i];
		if (psum == k) count++;
		if (hash.find(psum - k) != hash.end()) {
			count += hash[psum - k];
		}
		hash[psum]++;  // Update the hash map with the current prefix sum
	}
	return count;
}
int main()
{

	vector<int>v = {1 , 2 , 3};
	int k = 3;
	cout << subarraySum(v, k);

	return 0;
}