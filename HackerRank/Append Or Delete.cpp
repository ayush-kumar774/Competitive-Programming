// https://www.hackerrank.com/challenges/append-and-delete/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string s , t ;
    int k , commonLength = 0 ;
    cin >> s >> t >> k ;
    for(int i = 0;  i < min ( s.size() , t.size() ) ; i++)
    {
        if (s[i] == t[i] ) commonLength++ ;
        else break ;
    }

    if ( ( ( s.size() + t.size() ) - ( 2 * commonLength ) )  > k ) cout << "No" << endl ;
    else if ( ( (s.size() + t.size() ) - (2 * commonLength ) ) % 2 == k % 2 ) cout << "Yes" << endl ;
    else if ( (s.size() + t.size() - k) < 0 ) cout << "Yes" << endl ;
    else cout << "No" << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
