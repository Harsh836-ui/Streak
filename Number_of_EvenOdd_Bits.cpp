#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int countSetBits(int n) {
	int count = 0;

	while (n > 0) {   //BRIAN KERNINGAM'S ALGO
		n = n & (n - 1);
		count++;
	}
	return count;
}

vector<int> evenOddBit(int n) {
	int evenBits = n & 0xAAAAAAAA;
	int oddBits =  n & 0x55555555;

	return {countSetBits(oddBits), countSetBits(evenBits) };
}
int main()
{


	return 0;
}