//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  // long long a = 23562852450725;
  // cout << a << endl ;
  long long  n, sum{0}, count{0} ;
  cin >> n ;
  long long arr[n] ;
  for(int i = 0 ; i < n;  i++) cin >> arr[i] ;
  sort(arr, arr + n) ;
  for(int i = 0 ; i < n ; i++)
  {
    if(arr[i] >= 0) {
      sum += arr[i] ;
      count++ ;
    }
  }
  cout << sum << " " << count << endl ;
}
