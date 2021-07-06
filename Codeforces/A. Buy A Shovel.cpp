// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int k , r , flag = 0 ;
    cin >> k >> r ;
    for(int i = 1 ; i <= 10 ; i++)
    {
        if(k * i % 10 == r) {
            cout << i << endl ;
            flag = 1 ;
            break ;
        }
    }
    if(flag == 0) {
        for(int i = 1 ; i <= 10; i++)
            {
                if( (k *i) % 10 == 0 ) {
                    cout << i << endl ;
                    break ;
                }
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