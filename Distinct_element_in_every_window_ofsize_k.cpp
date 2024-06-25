#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
/*void NADisEl(vector<int>v , int k) {
	int n = v.size();
	set<int>s;
	for (int i = 0 ; i <= n - k ; i++) {
		s.clear();
		for (int j = i ; j < i + k ; j++) {
			s.insert(v[j]);

		}
		cout << s.size() << " ";
	}
}*/
void EFFisEL(vector<int>v , int k ) {
	int n = v.size();
	unordered_map<int , int>hash;
	for (int i = 0 ; i < k ; i++) {
		hash[v[i]]++;

	}
	cout << hash.size() << " ";
	for (int i = k ; i < n ; i++) {

		hash[v[i]]++; //add current element
		hash[v[i - k]]--; //remove 1st elements

		if (hash[v[i - k]] == 0)
		{
			hash.erase(v[i - k]);
		};

		cout << hash.size() << " ";
	}
}
int main()
{
	vector<int>v = {1, 2, 1, 3, 4, 3, 3};
	int k = 4;

	// NADisEl(v , k);
	EFFisEL(v , k);

	return 0;
}