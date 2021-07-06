#include <bits/stdc++.h>
using namespace std;
int main()
{
  int testcase ;
  cin >> testcase ;
  while(testcase--)
  {
    int a1, a2, b1, b2 ;
    cin >> a1 >> b1 >> a2 >> b2 ;
    if(max(a1, b1) == max(a2, b2) and min(a1, b1) + min(a2, b2) == max(a2, b2)) cout << "YES\n";
    else cout << "NO\n";
  }
}
