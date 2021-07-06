//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long n ;
  cin >> n ;
  long long arr[n] , target = 0 ;
  for(int i = 0 ; i < n ; i++)
  {
    cin >> arr[i];
  }
  cin >> target ;
  for(int i = 0 ; i < n ; i++)
  {
    if(arr[i] == target) { cout << i << endl ;
    break ; }
  }
}
