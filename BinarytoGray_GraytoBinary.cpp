#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int xors(char a , char b) {
	if (a != b) return '1';
	else return '0';
}
int main()
{

	/*//Binary To Gray
	string b;
	cin >> b;
	string gray;
	gray += b[0];
	for (int i = 1; i < b.length(); ++i)
	{
		gray += xors(b[i] , b[i - 1]);
	}
	cout << gray;*/

	//Gray to binary:
	string g; cin >> g;
	string binary;
	binary += g[0];
	for (int i = 1; i < g.length(); ++i)
	{
		binary += xors(binary[i - 1] , g[i]);
	}
	cout << binary;

	return 0;
}