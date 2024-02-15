#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
   string s = "   fly me   to   the moon  "; int n = s.size();

   int trail = 0 ; int count = 0;
   int i = n - 1;

   while (i >= 0 && s[i] == ' ') { //to skip trailing ' '
      i--;
   }

   while (i >= 0 && s[i] != ' ') {
      i--;
      count++;
   }

   cout << count;

   return 0;
}