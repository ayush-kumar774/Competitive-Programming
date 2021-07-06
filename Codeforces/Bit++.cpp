//http://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, num = 0 ;
    cin >> n ;
    while(n--)
    {
        string s ;
        cin >> s ;
        if ( ( s[0] == '+' && s[1] == '+' ) || ( s[1] == '+' && s[2] == '+' ) )
        {
           num ++ ;
        }
        else
        {
            num -- ;
        }
    }
    cout << num << endl ;
}
