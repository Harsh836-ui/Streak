#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int Binsearch(vector<int>&v , int l , int h , int x) {
	while (l <= h) {
		int mid = (l + h) / 2;
		if (v[mid] == x) return mid;
		else if (v[mid] > x) h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}
int EffsearchInf(vector<int>&v , int x) {
	if (v[0] == x ) return 0;
	int i = 1;
	while (v[i] < x)
		i = i * 2;

	if (v[i] == x) return i ;

	return Binsearch(v , i / 2 + 1, i , x);
}
/*int NasearchInf(vector<int>&v , int x) {
	int i = 0 ;
	while (true) {
		if (v[i] == x ) return i;
		if (v[i] > x) return -1;
		i++;
	}
}*/
int main()
{
	vector<int>v = {1 , 10 , 15 , 20 , 40 , 80 , 90 , 100 , 120 , 500};
	int x = 100;

	// cout << NasearchInf(v , x);
	cout << EffsearchInf(v , x);

	return 0;
}