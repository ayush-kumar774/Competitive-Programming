//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
#include <bits/stdc++.h>
using namespace std;
bool isVowel (char ch)
{
  if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true ;
  return false;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long testcase, count = 0 ;
  cin >> testcase ;
  while(testcase--)
  {
    string s ;
    cin >> s ;
    transform(s.begin(), s.end(), s.begin(),::tolower);
    for(int i = 0 ; i < s.size() ; i++)
    {
      if(isVowel(s[i])) count++;
    }
    cout << count << endl ;
    count = 0 ;
  }
}
