//https://www.codechef.com/problems/FLOW006
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
         long long int number{0} , sum{0} ;
         cin >> number ;
         string s ;
         s = to_string(number);
 //        cout << sum << endl ;
         for(int i = 0 ; i < s.size() ; i++)
         {
             sum += int(s[i]) - 48;


         }
         cout << sum << endl ;
         sum = 0 ;
     }

}
