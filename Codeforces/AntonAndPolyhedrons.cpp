//https://codeforces.com/problemset/problem/785/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long int num {0}, sum{0} ;
   cin >> num ;
   for(int i = 0 ; i < num ; i++)
   {
       string s ;
       cin >> s ;
       if(s[0] == 'T')
       {
           sum += 4 ;
       }
       else if(s[0] == 'C')
       {
           sum += 6 ;
       }
       else if(s[0] == 'O')
       {
           sum += 8 ;
       }
       else if(s[0] == 'D')
       {
           sum += 12 ;
       }
       else if(s[0] == 'I')
       {
           sum += 20 ;
       }
   }
   cout << sum << endl ;
}
