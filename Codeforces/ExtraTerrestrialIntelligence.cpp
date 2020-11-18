//https://codeforces.com/problemset/problem/36/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    vector <int> v ;
    set <int> se ;
    int n ;
    cin >> n ;
    string s ;
    cin >> s;
    for(int i = 0 ; i < n ; i++)
    {
      if(s[i]=='1')
      {
        v.push_back(i);
      }
    }
    for(int i = 0; i < v.size() - 1 ; i++ )
    {
      se.insert ( v [ i + 1 ] - v [ i ] );
    }
    if(se.size() == 1)
    {
      return cout<<"YES",0 ;
    }
    cout << "NO\n" ;
    return 0;
}
