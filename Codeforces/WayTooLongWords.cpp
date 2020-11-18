//http://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int number ;
    cin >> number ;
    while ( number -- )
    {
        string s ;
        cin >> s ;
        if( s.size()<= 10 )
        {
            cout << s << endl ;
        }
        else
        {
            cout <<s[0] << s.size()-2 << s[s.size()-1] << endl ;
        }

    }
}
