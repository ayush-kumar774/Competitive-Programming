//https://codeforces.com/problemset/problem/617/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    long long int n , sum{0} , rem{0} ;
    cin >> n ;
    sum = n / 5 ;
   // cout << sum << endl ;
    rem = n %5 ;
   // cout << rem << endl ;
    sum += rem / 4 ;
   // cout << sum << endl ;
    rem %=4 ;
   // cout << rem << endl ;
    sum += rem/3 ;
   // cout << sum << endl ;
    rem %=3 ;
   // cout << rem << endl ;
    sum += rem/2 ;
   // cout << sum << endl ;
    rem %=2 ;
  //  cout << rem << endl ;
    sum +=rem/1;
  //  cout << sum << endl ;
    rem %=1 ;
    //cout << rem << endl ;
    cout << sum ;
}
