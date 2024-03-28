#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void reverse(int arr[], int low , int high ) {
	while (low < high) {
		swap(arr[low] , arr[high]);
		low++;
		high--;
	}
}
void bestlRotateD( int arr[] , int n , int d) {
	reverse(arr , 0 , d - 1);
	reverse(arr , d , n - 1);
	reverse(arr , 0 , n - 1);
}
/*void betterlRotateD(int arr[] , int n , int d) {
	int temp[d];
	for (int i = 0 ; i < n; i++)
		temp[i] = arr[i];

	for (int i = d ; i < n ; i++)
		arr[i - d] = arr[i];

	for (int i = 0 ; i < d ; i++) {
		arr[n - d + i] = temp[i];
	}

}*/
/*void lRotate1(int arr[] , int n ) {
	int temp = arr[0];
	for (int i = 0; i < n - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = temp;
}
void NalRotateD(int arr[] , int n , int d) {
	while (d--) {
		lRotate1(arr , n);
	}
}*/
int main()
{
	int n = 5; int d = 32;
	d = d % n;

	int arr[n] = {1 , 2, 3 , 4 , 5};
	// NalRotateD(arr , n , d); //naive
	// betterlRotateD(arr , n , d); //better
	bestlRotateD(arr , n , d); //Best

	for (auto it : arr) {
		cout << it << " ";
	}

	return 0;
}