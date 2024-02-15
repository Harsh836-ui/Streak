#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int search(vector<int> &v , int x) {
	int n = v.size();

	for (int i = 0; i < n; ++i)
	{
		if (v[i] == x)
			return i ;
	}

	return -1;
}


int main()
{

	vector<int>v = {2 , 3 , 5 , 7 , 8 };

	cout << search(v , 8);

	return 0;
}