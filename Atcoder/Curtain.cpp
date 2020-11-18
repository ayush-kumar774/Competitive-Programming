//https://atcoder.jp/contests/abc143/tasks/abc143_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a, b ;
  cin >> a >> b ;
  if(2*b >= a) cout << 0 ;
  else cout << abs(2*b -a) << endl;
}