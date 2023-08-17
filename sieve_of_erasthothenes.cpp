#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void sieve(int n ) {
	vector<bool> vec(n + 1, true);

	for (int i = 2; i <= n; ++i)  //SHORTER IMPLEMENTATION
	{
		if (vec[i]) {
			cout << i << " ";
			for (int j = i * i; j <= n; j = j + i)
				vec[j] = false;
		}
	}

	/*for (int i = 2; i * i <= n; ++i)  //this loop marks all the multiples false
	{
		if (vec[i]) {
			for (int j = i * i ; j <= n ; j = j + i) {
				vec[j] = false;
			}
		}
	}


	for (int i = 2; i <= n; ++i)  //this loop prints only the true values
	{
		if (vec[i]) {
			cout << i << " ";
		}
	}*/

}

int main()
{
	int n ; cin >> n;
	sieve(n);

}