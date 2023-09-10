#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	int num ; cin >> num;
	int numOfBits = log2(num) + 1; //to get number of bits in given number
	int allBitset = (1 << numOfBits) - 1 ; //To generate a number whose all bits are set for 32 bit do 1L << 32
	int flipBits = allBitset - num;
	cout << flipBits;
	// cout <<  (((1 << numOfBits) - 1) ^ num);
	return 0;
}