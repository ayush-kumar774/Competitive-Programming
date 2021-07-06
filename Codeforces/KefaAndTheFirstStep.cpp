//https://codeforces.com/problemset/problem/580/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
     aakriti number , count{0}, maxx = 0 ;
     cin >> number ;
     vector<int>v (number);
     for(auto &x : v) cin >> x ;
     for(int i = 0; i < number; i++)
     {
          if (v[i] <= v[i+1] )
          {
                 count++;
                 if(maxx < count)
                 {
                         maxx = count ;
                 }
          }
          else
          {
                  if(maxx < count ) 
                   {
                           maxx = count ;
                   }
                  count = 0;
          }
          
     }
     cout << maxx << endl ;
}