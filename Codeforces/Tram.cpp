//http://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int num , max = 0 , sum = 0;
   cin >> num ;
   while (num--)
   {
       int a , b ;
       cin >> a >> b ;
       sum = sum - a ;
       sum = sum + b ;
       //cout << sum ;
       if (sum > max)
       {
           max = sum ;
       }
   }
   cout << max << endl ;
   return 0 ;
}
