//https://leetcode.com/problems/word-pattern/
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	string p, s;
	p = "abba";
	s = "dog cat cat dog";
//-----Counting Frequency of each char
	map<char , int >mp;
	for (int i = 0 ; i < p.size() ; i++) {
		mp[p[i]]++;
	}

	for (auto x : mp) {
		cout << x.first << " " << x.second << nline;
	}

//-------Counting frequency of each word in the given string
	map<string, int> M;
	string word = "";

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			if (M.find(word) == M.end()) {
				M.insert(make_pair(word, 1));
				word = "";
			}
			else {
				M[word]++;
				word = "";
			}
		}

		else
			word += s[i];
	}

	if (M.find(word) == M.end())
		M.insert(make_pair(word, 1));
	else
		M[word]++;


	for (auto& it : M) {
		cout << it.first << " - "
		     << it.second
		     << endl;
	}


}