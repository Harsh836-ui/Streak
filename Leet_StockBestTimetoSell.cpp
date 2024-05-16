//---Can buy and sell stock once for max profit
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffMaxProfit(int arr[] , int n ) {
	int minPrice = INT_MAX;
	int profit = 0;

	for (int i = 0; i < n; ++i) {
		// Update the minimum price encountered so far
		if (arr[i] < minPrice) {
			minPrice = arr[i];
		}

		int potentialProfit = arr[i] - minPrice;

		profit = max(profit , potentialProfit);
	}

	return profit;

}

/*int NaiveMaxProfit(int arr[] , int n) { //Efficient
	int profit = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1 ; j < n ; j++) {
			if (arr[j] > arr[i])
				profit = max(profit , arr[j] - arr[i] );
		}
	}

	return profit;
}*/

int main()
{
	int arr[] = {7, 1, 5, 3, 6, 4};
	int n = 6;


	// cout << NaiveMaxProfit( arr , n );
	cout << EffMaxProfit( arr , n );

	return 0;
}