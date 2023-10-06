#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

string revStr(string str , int s , int e) {
	if (s >= e)
		return 0;

	return  revStr(str , s + 1 , e - 1);
	swap(str[s] , str[e]);
}
int main()
{

	string s ; cin >> s; int n = s.size();

	revStr(s , 0 , n - 1);

	/* //Using STL : reverse(s.begin() , s.end());
	//Using SWAP:
	for (int i = 0; i < n / 2; ++i)
	{
		swap(s[i] , s[n - i - 1]);
	}
	cout << s;*/
	return 0;
}