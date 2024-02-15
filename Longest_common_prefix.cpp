#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	vector<string> v = {"flower", "flow", "flight"};
	int n = v.size();
	string pref = v[0];
	for (int i = 1 ; i < n ; i++) {
		while (v[i].find(pref) != 0) { //0 tells that position of that string in out res should be prefix
			pref = pref.substr(0 , pref.length() - 1);
			cout << pref << nline;
		}
	}

	cout << pref;

	return 0;
}