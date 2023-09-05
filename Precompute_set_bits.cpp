#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int table[256];

void initialize() {
	table[0] = 0;
	for (int i = 1; i < 256; ++i) {
		table[i] = (i & 1) + table[i / 2];
	}
}

int main()
{
	initialize();
	cout << table[252];

	return 0;
}