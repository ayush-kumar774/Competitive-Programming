// https://atcoder.jp/contests/abc167/tasks/abc167_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s , res ;
  cin >> s >> res ;
  s += res[res.size() - 1 ] ;
  if(s == res) cout << "Yes\n";
  else cout << "No\n";
}
