#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n , m, g , count = 0 , gap ;
  cin >> n >> m >> g ;
  int time[n], clothes[m];
  for(int i = 0 ; i < n ; i++) cin >> time[i];
  for(int i = 0 ; i < m ; i++) cin >> clothes[i];

  for(int i = 1 ; i < n ; i++)
  {
    gap = time[i] - time[i - 1] ;
    for(int i = 0 ; i < m ; i++)
    {
      if(clothes[i] <= gap)
      {
        count++;
        clothes[i] = INT_MAX ;
      }
    }

  }

  cout << count << endl ;
  return 0 ;
}
