//Find if There is a Pair in A[0..N-1] with Given Sum
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
	//note : array should be sorted before using 2 pointers
	vector<int>arr = { 11, 3, 9, 8, 5, 10, 2 };
	int target = 17;

	int n = arr.size();
	sort(arr.begin() ,  arr.end());

	int i = 0 ; int j = n - 1; //initialising our 2 pointers

	while (i < j) {
		if (arr[i] + arr[j] == target) {
			cout << arr[i] << " " << arr[j];
			break;//to prevent infinite loop
		}
		else if (arr[i] + arr[j] < target)
			i++;

		else j--;
	}
	return 0;
}