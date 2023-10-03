#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

/*int words(string s) {
	int count = 0;
	for (int i = 0 ; i < s.size() ; i++) {
		if (s[i] == ' ') count++;
	}
	return count;
}*/
int mostWordsFound(vector<string>& sentences) {
	int maxx = 0;

	for (auto s : sentences) {
		int len = count(s.begin(), s.end(), ' ');
		maxx = max(maxx , len + 1);
	}
	return maxx;
}
int main()
{

	vector<string>sentences = {"please wait", "continue to fight", "continue to win"};

	cout << mostWordsFound(sentences);
	return 0;
}