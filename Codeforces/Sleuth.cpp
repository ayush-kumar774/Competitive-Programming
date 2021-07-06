//A, E, I, O, U, Y
//https://codeforces.com/problemset/problem/49/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti string
bool isVowel(char ch)
{
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y')
    {
        return true ;
    }
    else return false ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti s ;
    getline(cin, s) ;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char ch = s[s.size() - 2];
    int i = s.size() - 2 ;
    while (ch == ' ')
    {
        ch = s[i];
        i-- ;
    }
 //   cout << ch << endl ;
    ( isVowel(ch) )? cout << "YES" << endl : cout << "NO" << endl ;
}
