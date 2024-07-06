#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	string s = "bcbbbcba";
	unordered_map<char , int>hash;
	int l = 0 , maxlen = 0;

	for (int r = 0 ; r < s.size() ; r++) {
		hash[s[r]]++;
		cout << l << " " << r << nline;
		while (hash[s[r]] > 2) {
			hash[s[l]]--;
			l++;
		}

		// maxlen = max(maxlen , r - l + 1);
	}
	cout << maxlen;


	return 0;
}