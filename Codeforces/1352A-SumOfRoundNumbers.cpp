// https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int testcase ;
  cin >> testcase ;
  while (testcase--)
  {
    int n ;
    cin >> n ;
    vector<int> res;
    int place = 1 ;
    while (n > 0 )
    {
      if (n % 10 > 0 )
      {
        res.push_back ((n % 10 ) * place );
      }
      n /= 10 ;
      place *= 10 ;
    }
    cout << res.size() << endl ;
    for (auto x : res) cout << x << " ";
    cout << endl ;
  }
}
