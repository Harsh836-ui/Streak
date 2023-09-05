#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int isPowOF2(int n) {
	int count = 0;

	while (n > 0) {   //BRIAN KERNINGAM'S ALGO
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n ; cin >> n;
	if (isPowOF2(n) == 1)
		cout << "YES";
	else cout << "NO";


	return 0;
}