#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int subarrWithEqual(vector<int>v) {
	unordered_map<int, int>hash;
	int psum = 0 , maxlen = 0;

	for (int i = 0 ; i < v.size() ; i++) {
		if (v[i] == 0)v[i] = -1; //changing 0 to -1s
		psum += v[i];

		if (psum == 0) maxlen = max(maxlen , i + 1); //for subarray that will start from beginning and are in ans
		if (hash.find(psum) != hash.end())
			maxlen = max(maxlen , i - hash[psum]);
		else
			hash[psum] = i; //we used else to only store the first occurrence of psum , and to prevent overwriting it with next occurences

	}
	return maxlen;
}
int main()
{
	vector<int>v = {0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 1};
	cout << subarrWithEqual(v);


	return 0;
}