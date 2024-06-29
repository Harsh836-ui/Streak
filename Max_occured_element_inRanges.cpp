#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
/*int BetterFindEle(vector<int>L , vector<int>R , int n) {
	vector<int>v(1000); //all values 0

	for (int i = 0 ; i < n ; i++) {
		v[L[i]]++;
		v[R[i] + 1]--;
	}

	int res = 0 , maxcount = v[0]; //v[0] cuz we started loop from i = 1 , so we let so that it dont miss
	for (int i = 1 ; i < 1000 ; i++) {
		v[i] += v[i - 1]; //Prefix Sum
		if (v[i] > maxcount) {
			maxcount = v[i];
			res = i;
		}
	}
	return res;
}*/

/*int NaFindEle(vector<int>L , vector<int>R , int n) {
	unordered_map<int , int>hash;
	for (int i = 0 ; i < n ; i++) {
		for (int j = L[i] ; j <= R[i] ; j++) {
			hash[j]++;
		}
	}
	int res = 0; int max_count = 0; int ans;

	for (auto i : hash) //To find the element that occurs maximum times & also res will store the 1st element that has that freq so if you use map you return just res and will get the result dont have to proceed further but in case of unordered_map extra loop below
		if (max_count < i.second) {
			res = i.first;
			max_count = i.second;
		}


	for (auto it : hash) { //In case of tie(find the smallest one)
		if (it.second == max_count)
			ans = min(ans , it.first);
	}

	return ans;
}*/
int main()
{
	int n = 10; //n is max of both array sizes
	vector<int>L = {2 , 5, 3, 4, 3, 3, 2, 7, 9, 6};
	vector<int>R = {4, 5, 6, 6, 8, 3, 10, 10, 10, 10};

	// cout << NaFindEle(L , R , n); //Brute force
	// cout << BetterFindEle(L , R , n); //if max value < 1000 //But note works perfectly fine for gfg problem cuz maxx value already given so just declare vector of size maxx+2 and continue
	return 0;
}