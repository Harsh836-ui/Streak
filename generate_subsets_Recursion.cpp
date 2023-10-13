#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void GenerateSubsets(string s , string curr = "" , int i = 0) {
	if (i == s.length()) {
		cout << curr << nline;
		return ;
	}

	GenerateSubsets(s , curr , i + 1);
	GenerateSubsets(s, curr + s[i] , i + 1);

}
int main()
{

	string s = "abc";
	GenerateSubsets(s);

	return 0;
}