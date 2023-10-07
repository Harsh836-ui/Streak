#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

string shuffle(string s , int *indices) {
	string ans = s;
	for (int i = 0; i < s.size(); ++i)
	{
		ans[indices[i]] = s[i];
	}
	cout << ans;
}
int main()
{
	string s = "codeleet"; int indices[] = {4, 5, 6, 7, 0, 2, 1, 3};
	shuffle(s , indices);


	return 0;
}