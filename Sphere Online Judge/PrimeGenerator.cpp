#include <bits/stdc++.h>
using namespace std ;
int main()
{
  int testcase ;
  cin >> testcase ;
  while(testcase--)
  {
    long long a , b ;
    cin >> a >> b ;
    if(a == 1) a++;
    while(a <= b)
    {
      bool flag = false ;
      for(int i = 2 ; i <= sqrt(a) ; i++)
      {
        if(a % i == 0) {
          flag = true ;
          break ;
        }
      }
      if(!flag) cout << a << endl ;
      a++;
    }
  }
}
