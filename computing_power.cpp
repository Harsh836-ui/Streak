#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int power(int x , int n) { //Most Optimised and Fastest : using & and << operator
	int res = 1;
	while (n > 0) {

		if (n & 1) //i.e if the bit is 1
			res = res * x;

		x = x * x;
		n = n >> 1;
	}
	return res;
}

/*int power( int x , int n) { //Iterative (Binary Expo)
	//LOGIC : Traverse through all bits in binary rep LSB TO MSB and multiply the number with corresponding bit position if bit is 1 and if bit is 0 skip it
	int res = 1 ;
	while (n > 0) { //traversing thru all the bits of n's binary rep

		if (n % 2 != 0) //i.e if the bit is 1
			res = res * x;

		x = x * x;
		n = n / 2;
	}
	return res;
}*/

/*int power(int x , int  n) { //recursive sol
	if (n == 0) return 1; //base case

	int temp = power( x , n / 2); //basic idea to calculate this power first
	temp = temp * temp;

	if (n % 2 == 0) return temp;
	else return temp * x;

}*/

/*int power(int x , int n ) { //Brute force
	int prod = 1;
	for (int i = 0; i < n; i++)
	{
		prod *= x;
	}
	return prod;
}*/

int main()
{

	int x , n ;
	cin >> x >> n;
	cout << power(x , n );

	return 0;
}