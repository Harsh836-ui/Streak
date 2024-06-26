//Sum between range(inclusive) //This question will tell alot about the use of functions too
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int pf[10000];  //declare global

void PFsum(vector<int>v) {
	int n  = v.size();
	pf[0] = v[0];
	for (int i = 1 ; i < n ; i++) {
		pf[i] = pf[i - 1] + v[i];

	}
}
int getsum(int pf[] , int l , int r) {
	if (l != 0)
		return pf[r] - pf[l - 1];
	else
		return pf[r];
}

int main()
{

	vector<int>v{2 , 8 , 3 , 9 , 6 , 5 , 4};
	PFsum(v);
	cout << getsum(pf , 2 , 6);
	cout << getsum(pf , 0 , 4);

	return 0;
}