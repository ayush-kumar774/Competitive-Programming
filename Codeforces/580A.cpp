#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int m , n ;
  cin >> n ;
  vector<int> v ;
  for(int i = 0 ; i < n ; i++)
  {
      int a ;
      cin >> a;
      v.push_back(a);
  }
  cin >> m;
  vector<int > v1 ;
  for(int i = 0; i < m; i++)
  {
      int a ;
      cin >> a ;
      v1.push_back(a);
  }
  sort(v.begin(), v.end());
  sort(v1.begin(), v1.end());
  for(auto x : v)
    cout << x << endl ;
  for(auto x : v1)
    cout << x << endl ;
  cout << v[n-1] << " " << v1[m - 1] ;
}
