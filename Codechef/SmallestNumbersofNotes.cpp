//https://www.codechef.com/problems/FLOW005
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    int testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        long long int n , sum{0} , rem{0} ;
        cin >> n ;
        sum = n / 100 ;
       // cout << sum << endl ;
        rem = n %100 ;
       // cout << rem << endl ;
        sum += rem / 50 ;
       // cout << sum << endl ;
        rem %=50 ;
       // cout << rem << endl ;
        sum += rem/10 ;
       // cout << sum << endl ;
        rem %=10 ;
       // cout << rem << endl ;
        sum += rem/5 ;
       // cout << sum << endl ;
        rem %=5 ;
      //  cout << rem << endl ;
        sum +=rem/2;
      //  cout << sum << endl ;
        rem %=2 ;
        //cout << rem << endl ;
        sum +=rem/1;
      //  cout << sum << endl ;
        rem %=1 ;
        //cout << rem << endl ;
        cout << sum << endl ;
        sum = 0 ;
    }

}
