#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

//Simple Code:
int main() {
	int arr[10] = {3 , 2 , 6};
	int currlen = 3;

	//Print the original array :
	for (int i = 0; i < currlen; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << nline;


	int toins = 5; int pos = 1;

	//check if enough space for insertion then shift elements to make space for new insertion:
	if (currlen < 10) {
		for (int i = 9 ; i >= pos ; i--)
			arr[i + 1] = arr[i];


		arr[pos] = toins;
		currlen++;

		for (int i = 0; i < currlen; ++i)
		{
			cout << arr[i] << " ";
		}

	}
	else
	{
		cout << "No more space for insertion";
	}
}

/*//Using function code :
int insert(int arr [] , int n , int x , int cap , int pos) {
	if (n == cap)
		return n ;

	int idx = pos - 1;

	for (int i = n - 1 ; i >= idx ; i--) {
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
}
int main()
{
	int arr[5] , cap = 5 , n = 3 ;
	arr[0] = 5 ; arr[1] = 10 ; arr[2] = 20;

	cout << "before Insertion " << nline;

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << nline;

	int x = 7 , pos = 2;
	n = insert(arr , n , x , cap , pos);

	cout << "After insertion " << nline;

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}*/