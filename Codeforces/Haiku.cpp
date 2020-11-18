//https://codeforces.com/problemset/problem/78/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s , s1 , s2 ;
    getline(cin , s) ;
    getline(cin , s1) ;
    getline(cin, s2) ;
    int scount{0} , s1count{0} , s2count{0} ;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'o' or s[i] == 'u' or s[i] == 'i')
        {
            scount++ ;
        }
    }
     for(int i = 0 ; i < s1.size() ; i++)
    {
        if(s1[i] == 'a' or s1[i] == 'e' or s1[i] == 'o' or s1[i] == 'u' or s1[i] == 'i')
        {
            s1count++ ;
        }
    }
     for(int i = 0 ; i < s2.size() ; i++)
    {
        if(s2[i] == 'a' or s2[i] == 'e' or s2[i] == 'o' or s2[i] == 'u' or s2[i] == 'i')
        {
            s2count++ ;
        }
    }
    if(scount == 5 and s1count == 7 and s2count == 5)
    {
        cout << "YES" << endl ;
    }
    else
        cout << "NO" << endl ;
}
