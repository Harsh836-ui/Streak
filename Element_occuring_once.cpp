//-----Given array where all element occurs 2 times except one , find that
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	vector<int> v = {2 , 2 , 4 , 5 , 4};
	int n = v.size();

	unordered_map<int , int > hash;
	for (auto x : v) {
		hash[x]++;
	}

	/*for (auto x : hash) {
		cout << x.first << " " << x.second << nline;
	}*/

	for (auto x : hash ) {
		if (x.second == 1)
			cout << x.first;
	}

	return 0;
}