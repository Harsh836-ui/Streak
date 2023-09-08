#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	string str; cin >> str;
	int n = str.length();
	int powSize = pow(2 , n);

	for (int counter = 0; counter < powSize; counter++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((counter & (1 << j)) != 0)
				cout << str[j];
		}
		cout << nline;
	}

	return 0;
}