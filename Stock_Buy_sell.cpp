#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int EffMaxProfit(int price[] , int n) { //Efficient
	int profit = 0;

	for (int i = 1; i < n; i++)
	{
		if (price[i] > price[i - 1])
			profit += price[i] - price[i - 1];
	}

	return profit;
}

/*
int NamaxProfit(int price[] , int start , int end) { //Naive

	if (start >= end)
		return 0;

	int profit = 0;
	for (int i = start ; i < end ; i++) {
		for (int j = i + 1 ; j <= end ; j++) {
			int curr_Profit = price[j] - price[i]
			                  + NamaxProfit(price , start , i - 1)
			                  + NamaxProfit(price , j + 1 , end);

			profit = max(profit , curr_Profit);
		}
	}

	return profit;
}*/

int main()
{
	int arr[] = {7, 1, 5, 3, 6, 4};
	int n = 6;

	// cout << NamaxProfit(arr , 0 , n - 1);
	cout << EffMaxProfit( arr , n);

	return 0;
}