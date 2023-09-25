#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

//Tail Recursive Factorial:
int tailFact(int n) {
	if (n == 0 ||  n == 1)
		return 1;

	return n * tailFact(n - 1);
}
//NON-Tail Recursive Factorial:
int NonTailFact(int n , int k) {
	if (n == 0 || n == 1)
		return k;

	return NonTailFact(n - 1 , k * n);
}
int main()
{
	cout << tailFact(5) << nline;
	cout << NonTailFact(5 , 1);


	return 0;
}