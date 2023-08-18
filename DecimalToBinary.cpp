#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int n ; cin >> n;
	vector<int> DecToBin;
	while (n > 0) {
		/*if (n % 2 != 0)
			DecToBin.push_back(1);
		else
			DecToBin.push_back(0);*/
		DecToBin.push_back(n % 2);

		n = n / 2;
	}

	reverse(DecToBin.begin(), DecToBin.end()); //Reverse the vector

	for (auto x : DecToBin) {
		cout << x << " ";
	}


	return 0;
}