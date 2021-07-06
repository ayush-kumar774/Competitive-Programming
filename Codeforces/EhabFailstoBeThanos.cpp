#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n , flag = 0 ;
  cin >> n ;
  int v[2*n];
  for(int i = 0 ; i < 2*n; i++ ) cin >> v[i];

  for(int i = 0 ; i < 2*n ; i++)
  {
    if(v[0] != v[i] ){
      flag = 1 ;
    }
  }

  if(flag)
  {
    sort(v, v+2*n);
    for(auto x : v) cout << x << " ";
  }
  else cout << -1 ;
}
