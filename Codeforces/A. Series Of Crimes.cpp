// https://codeforces.com/problemset/problem/181/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    char dist[n][m] ;

    int counter = 0 , _1x, _1y, _2x, _2y, _3x, _3y ;


    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> dist[i][j] ;
            if(dist[i][j] == '*') {
                counter ++ ;
                if(counter == 1) {
                    _1x = i ;
                    _1y = j ;
                }
                else if(counter == 2) {
                    _2x = i ;
                    _2y = j ;
                }
                else if(counter == 3) {
                    _3x = i ;
                    _3y = j ;
                }
            }
        }
    }

    // cout << "Position of 1 star is " << _1x << " " << _1y << endl ;
    // cout << "Position of 2 star is " << _2x << " " << _2y << endl ;
    // cout << "Position of 3 star is " << _3x << " " << _3y << endl ;

    if(_1x == _2x) {
        if(_1y == _3y) 
        {
            cout << _3x + 1 << " " << _2y + 1 << endl ;
        }
        else if (_2y == _3y) 
        {
            cout << _3x + 1 << " " << _1y + 1 << endl ; 
        }
    }

    else if (_2x == _3x) {
        if(_2y == _1y) 
        {
            cout << _1x + 1 << " " << _3y + 1 << endl ;
        }
        else if (_3y == _1y) 
        {
            cout << _1x + 1 << " " << _2y + 1 << endl ;
        }
    }
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
