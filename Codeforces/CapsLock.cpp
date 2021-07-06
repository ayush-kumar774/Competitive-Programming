//https://codeforces.com/contest/131/problem/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0);
    string s ;
    cin >> s ;
    int counter = 0 ;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] <= 90 && s[i] >= 65)
        {
            counter++ ;
        }
    }
    if( (s[0] >= 97 && s[0] <= 122) && ( counter + 1 == s.size() ) )
    {
        transform(s.begin(), s.end(), s.begin() , :: tolower) ;
        s[0] = toupper(s[0]);
        cout << s ;
    }
    else if ( (s[0] >= 65 && s[0] <= 90) && ( counter == s.size() ) )
    {
        transform(s.begin(), s.end(), s.begin() , :: tolower) ;
        cout << s ;
    }
    else
        cout << s ;
}
