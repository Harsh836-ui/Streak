#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int m , n;
	cin >> m >> n;
	int xors = (m ^ n);
	int rdb = log2((xors & ~(xors - 1))) + 1;
	cout << rdb;

	return 0;
}