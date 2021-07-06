// https://codeforces.com/problemset/problem/669/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    if(n == 2 or n == 1) cout << 1 << endl ;
    else {
        if(n & 1) {
            int sum = 1 , count = 1 ;
            while(sum <= n)
            {
                count++ ;
                if(count & 1) sum++ ;
                else sum += 2 ;
            }
            cout << count << endl ;
        }
        else
        {
            int sum = 2 , count = 1 ;
            while(sum <= n)
            {
                count++ ;
                if(count & 1) sum += 2 ;
                else sum += 1 ;
            }
            cout << count << endl ;
        }
        
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