//https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin >> testcase;
  while(testcase--)
  {
    int n , k ;
    cin >> n >> k ;
    n = (k - 1) / (n - 1);
    n += k ;
    cout << n << endl ;
  }
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
