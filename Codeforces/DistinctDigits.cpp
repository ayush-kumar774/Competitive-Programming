//https://codeforces.com/contest/1228/problem/0
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
bool distinct (aakriti a )
{
    string s = to_string(a);
    int n = s.size();
    set<int>S;
      while(a > 0)
            {
                    S.insert(a % 10);
                    a = a/10; 
            }
            if(S.size() == n ) return true;
            else return false;
}
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(0);
       aakriti l, r ;
       cin >> l >> r ;
       int count = 0;
       while(l <= r)
       {
           if( distinct(l) )
           {
               cout << l << endl ;
               count++;
               break;
           }
           else
           {
               l++;
           }
           
            
       }
       if(count == 0) cout << "-1" << endl ;
}