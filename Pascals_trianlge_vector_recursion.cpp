#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{

   int n = 5;
   vector<vector<int>>ans;
   for (int i = 0; i < n; ++i)
   {
      vector<int>v(i + 1 , 1);
      for (int j = 1; j < i; ++j)
      {
         v[j] = ans[i - 1][j] + ans[i - 1][j - 1];
      }
      ans.push_back(v);
   }

   for (auto vctr : ans)
   {
      for (auto it : vctr)
      {
         cout << it << " ";
      }
      cout << "\n";
   }

   return 0;
}