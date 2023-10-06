#include<bits/stdc++.h>
using namespace std;
#define nline "\n"


//------------------Using NCR Formula:
long long int fact(int n) { //Must use long long int to avoid signed integer overflow
	if (n == 0) return 1 ;

	return n * fact(n - 1);
}
void pascal1(int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{	//iCj
			cout << fact(i) / (fact(j) * fact(i - j)) << " ";
		}
		cout << nline;
	}
}

int main()
{
	int n ; cin >> n;
	pascal1(n);

}