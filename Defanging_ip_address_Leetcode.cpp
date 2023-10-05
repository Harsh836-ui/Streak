#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	string ipadd = "1.1.1.1";
	string res;


	for (auto c : ipadd) {
		if (c != '.') res = res + c;
		else res = res + "[.]";
	}
	cout << res;
	return 0;

}