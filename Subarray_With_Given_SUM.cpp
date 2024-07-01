//Size not fixed , and including all integers //Subarray Sum equals K
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
bool SumEqualsK(vector<int>v , int k) {
	int n = v.size();
	unordered_set<int>s;
	int psum = 0;
	for (int i = 0 ; i < n ; i++) {
		psum += v[i];
		if (psum == k) return true;
		if (s.find(psum - k) != s.end()) return true;
		s.insert(psum);
	}
	return false;
}
int main()
{
	vector<int>v = {1 , 4 , 20 , 3 , 10 , 5};
	int target = 33;

	cout << SumEqualsK(v , target);

	return 0;
}