#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
   string str = "A man, a plan, a canal: Panama";
   string res = "";
   for (auto e : str) {
      if (isalpha(e) || isdigit(e))
         res += e;
   }

   for (auto &c : res) {
      c = (char) tolower(c);
   }

   string temp = res;

   reverse(res.begin() , res.end());

   if (temp == res) cout << true ;
   else cout << false;

   return 0;
}