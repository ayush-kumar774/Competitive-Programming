//https://codeforces.com/contest/58/problem/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s, s1 ;
    s = "hello" ;
    cin >> s1 ;
    int j = 0;
    for(int i = 0 ; i < s1.size(); i++)
    {
        if(s[j] == s1[i])
        {
            j++ ;
        }
        else
        {
          if(j == 5)
          {
              break;
          }
        }
    }
    if(j == 5)
        cout << "YES" ;
    else
        cout << "NO" ;
}
