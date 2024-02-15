#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
   string s = "aeioufr";
   string ans = "";

   for (int i = 0; i < s.size(); ++i)
   {
      if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'
            && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
      {
         ans += s[i];
      }
   }

   cout << ans;
   return 0;
}