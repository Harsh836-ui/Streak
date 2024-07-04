#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int MergedArr(int a[] , int b[] , int c[] , int l1 , int l2) {

	int i = 0 , j = 0, k = 0;
	while (i < l1 || j < l2) {
		if (j == l2 || i < l1 && a[i] < b[j])
			c[k++] = a[i++];

		else
			c[k++] = b[j++];
	}
}
int main()
{
	int a[] = {1 , 3 , 5 , 8 , 10};
	int b[] = {2 , 6 , 7 , 9 , 13};

	int l1 = sizeof(a) / sizeof(a[0]);
	int l2 = sizeof(b) / sizeof(b[0]);

	int c[l1 + l2];

	MergedArr(a , b , c , l1 , l2);
	for (auto it : c)
		cout << it << " ";
	return 0;
}