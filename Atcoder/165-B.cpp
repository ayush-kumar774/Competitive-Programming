#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long X;
  cin >> X;
  long long P = 100, step = 0;
  while(P < X)
  {
    P += P / 100;
    step++;
  }
  cout << step << endl;
  return 0;
}
