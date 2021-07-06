#include <bits/stdc++.h>
using namespace std;
int main()
{
  const long long MonkQuotient = 1000000007 ;
  int n ;
  cin >> n ;
  vector<long long> v (n);
  for(auto&x : v) cin >> x ;
  long long mul = 1 * v[0] , ans , gcd = __gcd(v[0], v[1]) ;
  for(int i = 1 ; i < n ; i++)
  {
    mul *= v[i];
    gcd = __gcd(gcd, v[i]);
  }
  cout << gcd << endl ;
  ans = pow(mul,gcd);
  cout << ans % MonkQuotient << endl ;

}
