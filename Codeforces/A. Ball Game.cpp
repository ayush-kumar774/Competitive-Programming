// https://codeforces.com/contest/46/problem/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'
 
// start from 2 and add the index to the value k if k
// becomes greater than n simply subtract n from it we 
// will get the answer.

void solve()
{
    int n , k = 2 ;
    cin >> n ;
    for(int i = 2 ; i <= n ; i++)
    {
        cout << k << " " ;
        k += i ;
        if(k > n) k -= n ;
    }
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}

/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/