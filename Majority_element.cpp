#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffMajority(vector<int>v) { //Moore voting algo
	int n = v.size();
	int cnt = 0; int el;
	for (int i = 0; i < n ; i++) {
		if (cnt == 0) {
			cnt = 1 ;
			el = v[i];
		}
		else if (v[i] == el) cnt++;
		else cnt--;
	}

	int cnt1 = 0; int res = -1; //let for non existence
	for (int i = 0 ; i < n ; i++) {
		if (v[i] == el)
		{
			cnt1++;
			if (res == -1) res = i; //this will store the first occurence index
		}
	}

	if (cnt1 > n / 2) return res;
	return -1;
}
/*int NaMajority(vector<int>v) {
	int n = v.size();
	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = i + 1 ; j < n; j++) {
			if (v[i] == v[j])
				count++;
		}
		if (count > n / 2) return i;
	}
	return -1;
}*/
int main()
{
	vector<int> v = { 8 , 8 , 6 , 6, 6, 4 , 6 };

	// cout << NaMajority(v);
	cout << EffMajority(v);



	return 0;
}