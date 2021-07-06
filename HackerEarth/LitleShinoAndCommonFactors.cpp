#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long count{0} , a , b ;
  cin >> a >> b ;
  long long maxx = __gcd(a,b);
  for(int i = 1 ; i < sqrt(maxx) ; i++)
  {
    if(maxx % i == 0 )
    {
      if(maxx / i == i ) count++ ;
      else count+= 2 ;
    }

  }
  cout << count << endl ;
}
