#include<bits/stdc++.h>
void CheckNumber (long long a)
{
  char c ;
  while(a != 0) {
    long long b ;
    b = a % 10 ;
    if ( b == 7 )
    {
      c = 'a';
      break;
    }
    // std::cout << b << " " ;
    a /= 10 ;
  }
  if ( c == 'a')
  {
      std::cout << "Yes\n";
  }
  else
  {
       std::cout << "No\n";
  }
}
int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  long long n ;
  std::cin  >> n ;
  CheckNumber(n);
}
