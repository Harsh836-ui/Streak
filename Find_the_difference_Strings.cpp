//Program to find the extra character in two strings
//abcd abcde -> e
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	string a = "abcd";
	string b = "abcde";

	//XOR METHOD:

	string res = a + b; int c = 0;
	for (auto x : res) {
		c ^= x;
	}

	cout << (char)c;

	/*int res1 = 0; int res2 = 0;  //ASCII METHOD
	for (auto x : a) {
		res1 += x;
	}

	for (auto x : b) {
		res2 += x;
	}

	cout << char(abs(res2 - res1));*/



	return 0;
}