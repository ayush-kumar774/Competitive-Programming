//https://codeforces.com/problemset/problem/996/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    long long int n , sum{0} , rem{0} ;
    cin >> n ;
    sum = n / 100 ;
   // cout << sum << endl ;
    rem = n %100 ;
   // cout << rem << endl ;
    sum += rem / 20 ;
   // cout << sum << endl ;
    rem %=20 ;
   // cout << rem << endl ;
    sum += rem/10 ;
   // cout << sum << endl ;
    rem %=10 ;
   // cout << rem << endl ;
    sum += rem/5 ;
   // cout << sum << endl ;
    rem %=5 ;
  //  cout << rem << endl ;
    sum +=rem/1;
  //  cout << sum << endl ;
    rem %=1 ;
    //cout << rem << endl ;
    cout << sum ;
}
