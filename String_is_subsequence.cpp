#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	string s = "abc";
	string t = "ahbgdc";


	int i = 0;
	for (int j = 0; j < t.size(); ++j)
	{
		if (i < s.size()) {
			if (s[i] == t[j]) i++;
		}
	}

	if (i < s.size()) cout << "No";
	else cout << "Yes";


	return 0;
}