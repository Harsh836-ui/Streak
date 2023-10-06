#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

bool ispal(string &str , int start , int end) {
	if (start >= end) return true;

	if (str[start] == str[end])
		ispal(str , start + 1 , end - 1);
	else return false;

}

int main()
{
	string s = "abcdcba";
	int n = s.length();
	cout << ispal(s , 0 , n - 1);


	return 0;
}