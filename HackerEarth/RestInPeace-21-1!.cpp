//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int testcases ;
  cin >> testcases ;
  while(testcases--)
  {
      int x ;
      cin  >> x ;
      if(x % 21 == 0) cout << "The streak is broken!" << endl ;
      else
      {
         string s = to_string(x), a = "21";
         size_t found = s.find(a);
         if(found != string::npos)
         {
           cout << "The streak is broken!" << endl ;
         }
           else cout << "The streak lives still in our heart!" << endl ;
      }
   }
}
