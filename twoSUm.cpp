/*Q Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//Enter a sorted array: or sort the array if not sorted

//Brute Force Naive Approach: TC: On^2
	int arr[] = {10, 20, 35, 50, 75, 80};
	//Enter the sum you want to find
	int Pair_sum = 85;

	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);

	int start = 0;
	int end = n - 1;

	while (start < end) {


		if (arr[start] + arr[end] == Pair_sum) {
			cout << start << "," << end;
			break;

		}
		else if (arr[start] + arr[end] > Pair_sum)
			end--;

		else if (arr[start] + arr[end] < Pair_sum) {
			start++;
		}

	}

}