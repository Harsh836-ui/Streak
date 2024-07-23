#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int getPairsCount(const vector<int>& v, int k) {
	int n = v.size();
	unordered_map<int , int> hash;
	int count = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if (hash.find(k - v[i]) != hash.end())
			count += hash[k - v[i]];

		hash[v[i]]++;
	}
	return count;
}

int main()
{
	vector<int>v = {1 , 1 , 1 , 1};
	int k = 2 ;

	cout << getPairsCount(v , k);
	return 0;
}