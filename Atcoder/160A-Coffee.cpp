#include <bits/stdc++.h>

//using namespace std;

int main(int argc, char const *argv[])
{

  std::ios_base::sync_with_stdio(false);
  std::cin.tie();

  std::string s ;
  std::cin >> s ;

  if(s[2] == s[3] and s[4] == s[5]) {
    std::cout << "Yes\n";
  }

  else std::cout << "No\n";

  return 0;
}
