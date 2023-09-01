#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
void sieve(int n ) {
	if (n == 1) cout << false; //corner case
	vector<bool> vec(n + 1, true);

	for (int i = 2; i <= n; ++i)
	{
		if (vec[i]) {

			for (int j = i * i; j <= n; j = j + i)
				vec[j] = false;
		}
	}

	if (ceil((double)sqrt(n)) == floor((double)sqrt(n)) && vec[sqrt(n)])
		cout << true; //i.e if that number is perfect sqaure and is prime
	else cout << false;
	// for (int i = 2; i * i <= n; ++i) //this was solution for gfg one where they asked which numbers eg for input 10 we had 4 and 9 ans
	// {
	// 	if (vec[i])
	// 		cout << i * i << " ";
	// }
}
int main()
{
	int n; cin >> n;
	sieve(n);

	return 0;
}