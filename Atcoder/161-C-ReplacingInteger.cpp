//https://atcoder.jp/contests/abc161/tasks/abc161_c

#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a , b ;
  cin >> a >> b ;
  if (a < b ) cout << a << endl ;
  else{
    if(a % b == 0) {
      cout << 0 << endl ;
    }
    else {
      a %= b ;
       cout << b - a << endl ; 
    }
  }
  return 0 ;
}
