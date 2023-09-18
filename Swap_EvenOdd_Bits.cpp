#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

unsigned int swapBits(unsigned int n)
{
	unsigned int m = n & 0xAAAAAAAA;
	m =	m >> 1;

	unsigned int o = n & 0x55555555;
	o =	o << 1;

	return (m | o);
}
int main()
{
	cout << swapBits(23);


	return 0;
}