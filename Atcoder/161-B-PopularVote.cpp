#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long n, m, sum{0}, max = 0 ;
  std::cin >> n >> m ;
  int v[n] ;
  for(auto &x : v)
  {
    std::cin >> x ;
    if(x > max) {
      max = x ;
    }
    sum += x ;
  }

  

  return 0;
}
