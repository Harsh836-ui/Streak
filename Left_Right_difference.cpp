#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
vector<int> leftRightDifference(vector<int>&v) {
	int n = v.size();
	vector<int>answer(n);
	int total = 0;
	for (auto it : v)
		total += it;
	int lsum = 0 , rsum = total;
	for (int i = 0 ;  i < v.size() ; i++) {
		rsum -= v[i];
		answer[i] = abs(rsum - lsum);
		lsum += v[i];
	}
	return answer;
}
int main()
{
	vector<int>v = {10 , 4 , 8 , 3};
	vector<int>ans = leftRightDifference(v);
	for (auto it : ans) {
		cout << it << " ";
	}
	return 0;
}