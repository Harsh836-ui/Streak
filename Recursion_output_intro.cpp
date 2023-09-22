#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
//---------------------Function to return floor of log base 2 -> floor(log2(n)) , or any number
funLog(int n) {
	if (n == 1) return 0;

	else
		return 1 + funLog(n / 2);
}
//------------------Print Binary Equivalent of Number:------------------
void funBin(int n ) {
	if (n == 0) return;
	funBin(n / 2);
	cout << (n % 2);
}

//----------------Print n to 1 --------------------
void PrintNtoOne(int n) {
	if (n == 0) return;

	cout << n << " ";
	PrintNtoOne(n - 1);

}
int main()
{
	cout << funLog(31) << nline;
	funBin(19);
	cout << nline;
	PrintNtoOne(5);
	return 0;
}