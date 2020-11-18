//https://atcoder.jp/contests/abc164/tasks/abc164_c
#include<bits/stdc++.h>
int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int n ;
  std::cin >> n ;
  std::set<std::string>s;
  for(int i = 0 ; i < n; i++)
  {
    std::string x ;
    std::cin >> x ;
    s.insert(x) ;
  }

  std::cout << s.size() << std::endl ;
}
