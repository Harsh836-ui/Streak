#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

int main()
{
   string s = "my name is harsh";
   vector<string> words;

   int i = 0;
   string temp = "";

   while (i < s.size()) {
      if (s[i] == ' ') {
         words.push_back(temp);
         temp = "";
      }
      else {
         temp += s[i];
      }
      i++;
   }
   words.push_back(temp); //edge case this one is to push the last word


   for (auto it : words) {
      cout << it << " ";
   }

   return 0;
}