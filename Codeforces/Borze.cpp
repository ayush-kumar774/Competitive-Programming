//http://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    string s;
    cin >> s ;
    int i = 0 ;
    while( s[i] != '\0' )
    {

        if(s[i] == '.')
        {
            cout << 0 ;
            i+=1;
        }
        else if (s[i] == '-' and s[i+1] == '-')
        {
            cout << 2 ;
            i+=2 ;
        }
        else if (s[i] == '-' and s[i+1] == '.')
        {
            cout << 1 ;
            i+=2 ;
        }
    }



}
