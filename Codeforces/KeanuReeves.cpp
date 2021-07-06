//https://codeforces.com/problemset/problem/1189/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , zero = 0 , one = 0 ;
    cin >> n ;
    string s ;
    cin >> s ;
    zero = count( s.begin(), s.end(), '0' );
    one  = count( s.begin(), s.end(), '1' );
    if( zero != one )
    {
        cout << 1 << endl ;
        cout << s << endl ;
    }
    else
    {
        cout << 2 << endl ;
        for (int i = 0 ; i < (s.size()-1) ; i++ )
        {
            cout << s[i];
        }
        cout << " ";
        cout << s[s.size() - 1];
    }
}
