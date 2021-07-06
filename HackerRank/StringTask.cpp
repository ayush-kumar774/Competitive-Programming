//http://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std ;
int isConsonant(char ch)
{
    if ( (ch != 'A') || (ch != 'E') || (ch != 'I') || (ch != 'O') || (ch != 'U') || (ch != 'Y') || (ch != 'a') || (ch != 'e') || (ch != 'i') || (ch != 'o') || (ch != 'u') || (ch != 'y'))
    {
        return (1);
    }
    else
        return (0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s ;
    cin >> s ;
    for(int i = 0; i < s.size(); i++)
    {
        if(isConsonant(s[i] == 1))
        {
            cout << "." <<s[i];
        }
    }
}
