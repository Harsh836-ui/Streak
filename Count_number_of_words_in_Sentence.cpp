// C++ Program To Count Word in a Sentence
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {

	//To do it with stl in vector : int len = count(s.begin(), s.end(), ' ');
	char str[100];
	int i, len, count = 0;

	gets(str);
	//puts(str);
	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			count++;
		}
	}

	cout <<  count + 1;

	return 0;
}
