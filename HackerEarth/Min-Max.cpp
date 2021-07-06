//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long minSum{0} , maxSum{0} ;
  int n ;
  cin >> n ;
  vector<long long> v(n);
  for(auto &x : v) cin >> x ;
  sort(v.begin(), v.end());
  for(int i = 1 ; i < n ; i++) maxSum += v[i] ;
  for(int i = 0 ; i < n - 1 ; i++) minSum += v[i] ;

  cout << minSum << " " << maxSum << endl ;
}
