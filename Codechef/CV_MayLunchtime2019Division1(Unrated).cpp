#include<bits/stdc++.h>
using namespace std;
bool vowel( char ch )
{
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        return true;
    else
        return false;
}
int main()
{
   int testcase;
   cin >> testcase ;
   while(testcase--)
   {
       int n , count = 0;
       cin >> n;
       string s;
       cin >> s;
       for(int i = 0; i < n; i++)
       {
           if( !vowel(s[i]) && vowel(s[i+1]) )
            count++;
       }
       cout << count << endl;
}
}
