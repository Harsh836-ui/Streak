#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	cout << (3 << 1) << nline;
	cout << (3 >> 1) << nline;
	/*
	3 :      00....011
	3 <<1 :	 000...0110
	*/

	unsigned int x ;
	x = 5 ;
	cout << ~x << nline;

	int y ;
	y = 5 ;
	cout << ~y;
	return 0;
}