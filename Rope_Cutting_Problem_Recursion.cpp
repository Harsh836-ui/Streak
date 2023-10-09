#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int maxpeices(int n , int a , int b , int c) {
	if (n == 0) return 0;
	if (n < 0) return -1;

	int res = max(max(maxpeices(n - a , a , b , c) , maxpeices(n - b , a , b, c )), maxpeices(n - c , a , b, c));

	if (res == -1) return -1;
	return res + 1; //since we made 1st cut in begining so to include that

}
int main()
{
	int n  ; int a ; int b ; int c ;

	cout << maxpeices(5 , 5 , 3 , 2);
	return 0;
}