#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int sieve(int n ) {
	int count = 0;
	vector<bool> vec(n + 1, true);

	for (int i = 2; i < n; ++i)  //SHORTER IMPLEMENTATION
	{
		if (vec[i]) {
			count++;
			for (int j = i * i; j < n; j = j + i)
				vec[j] = false;
		}
	}
	return count;

}
int main()
{
	int n ; cin >> n;
	cout << sieve(n);



}