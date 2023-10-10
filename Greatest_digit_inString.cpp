#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
int minPartitions(string s) {

   /*sort(s.begin() , s.end());
   int x = s.size() - 1;
   char c = s[x];
   return c - '0';*/

   int m = INT_MIN;
   for (int i = 0 ; i < s.size() ; i++) {
      if (s[i] - '0' > m)
         m = s[i] - '0';
   }
   return m;
}
int main()
{
   string s = "329";
   cout << minPartitions(s);


   return 0;
}