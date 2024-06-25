//Leetcode
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int countGoodSubstrings(string s , int k ) {
	int count = 0;
	unordered_map<char , int>hash;
	for (int i = 0 ; i < k ; i++) {
		hash[s[i]]++;
	}

	if (hash.size() == k) count++;

	for (int i = k ; i < s.size() ; i++) {
		hash[s[i]]++;
		hash[s[i - k]]--;
		if (hash[s[i - k]] == 0)
			hash.erase(s[i - k]);

		if (hash.size() == k) count++;
	}

	return count;
}
int main()
{
	string s = "xyzzaz";
	int k = 3;
	cout << countGoodSubstrings(s , k);

	return 0;
}