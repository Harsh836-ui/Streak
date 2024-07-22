//Note : if array is not sorted in given problem you sort it cuz anyhow the tc will be on2 so you can afford sorting , and if the problem demands that you should not change the array then copy the array
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
//using 2 pointers:
bool twoPoint(vector<int>&v , int l , int r , int x) {
	while (l < r) {
		if (v[l] + v[r] == x)

		{
			cout << v[l] << " " << v[r] << " "; //from here we print the other pair
			return true;
		}

		else if (v[l] + v[r] > x ) r--;
		else l++;
	}
	return false;
}
bool EFFfindtripl(vector<int>&v , int x) {
	int n = v.size();
	for (int i = 0 ; i < n ; i++)
	{
		int first = v[i];
		if (twoPoint(v , i + 1 , n - 1 , x - first)) {
			cout << first; //here we print the value we fixed since it sums upto the target
			return true;
		}
	}
	return false;
}
//Using Hashing:
/*bool HashtwoPoint(vector<int>&v , int x ) {
	int n = v.size();

	for (int i = 0 ; i < n ; i++) {
		unordered_set<int>s;
		int first = v[i];
		for (int j = i + 1 ; j < n ; j++) {
			if (s.find(x - first - v[j]) != s.end())
			{
				cout << v[i] << " " << v[j] << " " << x - first - v[j];
				return true;
			}

			s.insert(v[j]);
		}
	}
	return false;
}*/
//Brute force : 3 Nested Loops
/*void NaFindTrip(vector<int>&v , int x) {
	int n = v.size();
	for (int i = 0 ; i < n ; i++)
		for (int j = i + 1 ; j < n ; j++)
			for (int k = j + 1 ; k < n ; k++)
				if (v[i] + v[j] + v[k] == x)
				{
					cout << v[i] << " " << v[j] << " " << v[k] << nline;
					//here you can just write return , if you want only 1 such pair otherwise it will give all such pairs which result in sum x
				}

}*/
int main()
{
	vector<int>v = {2 , 3 , 4 , 8 , 9 , 20 , 40};
	int x = 30;

	// NaFindTrip(v , x);
	EFFfindtripl(v , x);
	// HashtwoPoint(v , x);

	return 0;
}