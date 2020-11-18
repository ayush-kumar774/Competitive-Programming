#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long n , sum , rem = 0 ;
  std::cin >> n ;

  // 500 -> 1000 , 100 -> 100 , 50 -> 50 , 10 -> 10 , 5 -> 5 , 1 -> 1
  sum = ( n / 500 ) * 1000 ;
  // cout << sum << endl ;
  rem = n % 500;
  sum += ( rem / 5 ) * 5;
  //  cout << sum << endl ;
  rem %= 5;
  std::cout << sum << std::endl ;
  return 0;
}
