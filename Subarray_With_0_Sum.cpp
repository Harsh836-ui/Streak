#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
bool subArrayExists(vector<int>v) {
	int n = v.size();
	unordered_set<int>hash;
	int psum = 0;
	for (int i = 0 ; i < n ; i++) {
		psum += v[i];
		if (psum == 0) return true;
		if (hash.find(psum) != hash.end()) return true;

		hash.insert(psum);
	}
	return false;
}
/*bool subArrayExists(vector<int>v)
{
	int n = v.size();
	int psum = 0;
	unordered_map<int , int>hash;
	for (int i = 0 ; i < n  ; i++) {
		psum += v[i];
		if (psum == 0) return true;


		if (hash.find(psum) != hash.end()) return true;

		hash[psum] = i;
	}
	return false;
}*/
/*bool NaSubZerosumExists(vector<int>v) {
	int n = v.size();
	for (int i = 0 ; i < n ; i++) {
		int sum = 0 ;
		for (int j = i ; j < n ; j++) {
			sum += v[j];
			if (sum == 0) return true;
		}
	}
	return false;
}*/
int main()
{
	vector<int>v = {4 , 2 , -3 , 1 , 6};
	// cout << NaSubZerosum(v);
	cout << subArrayExists(v);
	return 0;
}