//https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti string
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti s ;
    int a ;
    cin >> s ;
    sort(s.begin(), s.end());
    vector<char>v;
   for(int i = 0; i < s.size(); i++)
   {
       if(s[i] != '+')
       {
           v.push_back(s[i]);
       }
   }
   a = v.size();
   for(int i = 0; i < a-1;  i++)
   {
       cout << v[i] << "+";
   }
   cout << v[a-1];
}
