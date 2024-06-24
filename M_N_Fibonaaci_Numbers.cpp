#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void EffNbonacci(int n , int m ) { //sliding window

	vector<int>v(m , 0);
	v[n - 1] = 1; int sum = 0;
	for (int i  = 0 ; i < n ; i++)
		sum += v[i];

	for (int i = n ; i < m ; i++) {
		v[i] = sum; //assign curr value of window sum to next element in the sequence before updating the sum for the next iteration.
		sum = sum + v[i ] - v[i - n];
	}
	for (auto it : v) {
		cout << it << " ";
	}
}

/*void NaNbonacci(int n , int m) {
	vector<int>v(m , 0); //initialise all element with 0, to avoid any print errors

	v[n - 1] = 1; // as we know n-1 elements 0 then next 1

	for (int i = n  ; i < m ; i++) {
		for (int j = i - 1; j >= i - n ; j--) {
			v[i] += v[j];
		}
	}

	for (auto it : v) {
		cout << it << " ";
	}
}*/
int main()
{
	int n = 3 , m = 8;
	// NaNbonacci(n , m);
	EffNbonacci(n , m);

	return 0;
}