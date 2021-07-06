// https://codeforces.com/problemset/problem/14/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    char arr[n][m] ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    int rowMin = 9999, rowMax = -1 , columnMin = 9999, columnMax = -1 ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++) {
            if(arr[i][j] =='*' ) {
                if (i > rowMax) {
                    rowMax = i ;
                }
                if (i < rowMin) {
                    rowMin = i ;
                }
            }
        }
    }

    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++) {
             if(arr[j][i] =='*' ) {
                if (i > columnMax) {
                    columnMax = i ;
                }
                if (i < columnMin) {
                    columnMin = i ;
                }
            }
        }
    }

    // cout << "Row min " << rowMin << " Row maximum " << rowMax << endl ; 
    // cout << "Column min " << columnMin << " Column maximum " << columnMax << endl ; 

    for(int i = rowMin ; i <= rowMax ; i++)
    {
        for(int j = columnMin ; j <= columnMax ; j++)
        {
            cout << arr[i][j] ;
        }
        cout << endl ;
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
/* 
15 3
...
...
...
.**
...
...
*..
...
.*.
..*
..*
*..
..*
...
...
*/