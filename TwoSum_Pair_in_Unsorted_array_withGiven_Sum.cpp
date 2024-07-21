#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void Eff2sumUnsort(vector<int>&v , int x ) {
	unordered_set<int>s;
	for (int i = 0 ; i < v.size(); i++) {
		if (s.find(x - v[i]) != s.end())
			cout << v[i] << " " << x - v[i];

		s.insert(v[i]);
	}
}
/*void Na2sumUnsort(vector<int>&v , int x ) { //Naive:ON^2
	int n = v.size();
	for (int i = 0 ; i < n ; i++)
		for (int j = i + 1 ; j < n ; j++)
			if (v[i] + v[j] == x)
				cout << i << " " << j;
}*/
int main()
{
	vector<int>v = {3 , 5 , 9 , 2 , 8, 10 , 11};
	int x = 17;

	// Na2sumUnsort(v , x);
	Eff2sumUnsort(v , x);


	return 0;
}