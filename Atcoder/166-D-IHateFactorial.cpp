//https://atcoder.jp/contests/abc166/tasks/abc166_d
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n, res = 0 , res2;
  cin >> n ;
  char c ;
  for(long long i = 0 ; i <= 99999999; i++)
  {
    long long ans = (i * i * i * i * i);
    long long ans2 = n - ans ;
    if(ans2 < 0 ) {
      c = 'n';
      ans2 *= -1 ;
    }
    else c = 'y';
    for(int j = 0 ; j <= ans2 ; j++)
    {
      if(j*j*j*j*j == ans)
      {
        res2 = j ;
        break;
      }
    }
  }

  cout << res << " " << res2 << endl ;

}
