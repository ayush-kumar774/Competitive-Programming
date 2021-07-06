// https://codeforces.com/problemset/problem/577/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , x , counter = 0 ;
    cin >> n >> x ;
    for(int i = 1 ; i <= n ; i++) {
        if(x % i == 0 and x / i <=  n) counter++;
    }
    cout << counter << endl;  
}

int32_t main()
{
    fast ;
    int testcases = 1;
    //cin >> testcases ;
    while (testcases--)
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