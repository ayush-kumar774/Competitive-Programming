//https://www.codechef.com/problems/CIELRCPT
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase{0} ;
    cin >> testcase ;
    while(testcase--)
    {
        long long int bill{0} , sum {0} , rem{0};
        cin >> bill ;
          sum = bill / 2048 ;
        // cout << sum << endl ;
          rem = bill %2048 ;
       // cout << rem << endl ;
          sum += rem / 1024 ;
       // cout << sum << endl ;
          rem %=1024 ;
       // cout << rem << endl ;
          sum += rem/512 ;
       // cout << sum << endl ;
          rem %=512 ;
       // cout << rem << endl ;
          sum += rem/256 ;
       // cout << sum << endl ;
          rem %=256 ;
      //  cout << rem << endl ;
          sum +=rem/128;
      //  cout << sum << endl ;
          rem %=128 ;
        //cout << rem << endl ;
        sum +=rem/64;
      //  cout << sum << endl ;
          rem %=64 ;
        //cout << rem << endl ;
        sum +=rem/32;
      //  cout << sum << endl ;
          rem %=32 ;
        //cout << rem << endl ;
        sum +=rem/16;
      //  cout << sum << endl ;
          rem %=16 ;
        //cout << rem << endl ;
        sum +=rem/8;
      //  cout << sum << endl ;
          rem %=8 ;
        //cout << rem << endl ;
        sum +=rem/4;
      //  cout << sum << endl ;
          rem %=4 ;
        //cout << rem << endl ;
        sum +=rem/2;
      //  cout << sum << endl ;
          rem %=2 ;
        //cout << rem << endl ;
        sum +=rem/1;
      //  cout << sum << endl ;
          rem %=1 ;
        //cout << rem << endl ;
        cout << sum  << endl ;
        sum = 0 ;
    }

}
