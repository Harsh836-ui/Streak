#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int table[256];    //to precompute count of set bits till number 256
// recursive function to count set bits
void initialize() {
	table[0] = 0;
	for (int i = 1; i < 256; ++i)

		table[i] = (i & 1) + table[i / 2];     /*e.g for table[25] = (25 & 1) + table[12]
                                                                   = 1 + T[12]
                                                                   = 1 + (12 & 1) + T[6]
																   = 1 + 0 + T[3]
																   = 1 + 1 + T[1]
																   = 1 + 1 + 1 + T[0]
											therefore    table[25] = 3
                                                                                      */
}
int countSetBits(int n)
{
	int count = 0;
	// Process 8 bits at a time and in case of 64 bit we will do i < 8
	for (int i = 0; i < 4; ++i) {
		count += table[n & 0xFF];
		n = n >> 8;  //Shift to next 8 bits
	}
	return count;
}

int main()
{
	initialize();
	int n; cin >> n;
	cout << countSetBits(n);

	return 0;
}