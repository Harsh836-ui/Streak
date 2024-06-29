#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

bool CanDiv3Part(vector<int>v) {
	int n = v.size();
	int totalsum = 0;
	for (auto it : v)
		totalsum += it;

	if (totalsum % 3 != 0)
		return false;

	int targetsum = totalsum / 3;
	int runningSum = 0 , count = 0;
	for (int i = 0 ; i < n ; i++) {
		runningSum += v[i];
		if (runningSum == targetsum) {
			count++;
			runningSum = 0;
		}
	}
	return count >= 3;
}
int main()
{
	vector<int>v = {0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1};

	cout << CanDiv3Part(v);

	return 0;
}