#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
   string str = "A man, a plan, a canal: Panama";
   string res = "";
   for (auto e : str) {
      if (isalpha(e) || isdigit(e))
         res += tolower(e);
   }
   cout << (res == string(res.rbegin() , res.rend()));

   return 0;
}