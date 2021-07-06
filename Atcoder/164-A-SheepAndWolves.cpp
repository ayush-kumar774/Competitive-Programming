//https://atcoder.jp/contests/abc164/tasks/abc164_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int s , w ;
  cin >> s >> w ;
  if(s <= w) cout << "unsafe\n";
  else cout << "safe\n";
}
