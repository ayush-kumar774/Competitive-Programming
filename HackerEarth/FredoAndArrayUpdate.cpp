#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long n ;
  cin >> n ;
  long long arr[n], sum = 0 ;
  for(int i = 0; i < n ; i++)
  {
    cin >> arr[i] ;
    sum += arr[i] ;
  }
  cout << (sum / n ) + 1 << endl ;
}
