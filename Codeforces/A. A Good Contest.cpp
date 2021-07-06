// https://codeforces.com/problemset/problem/681/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , no = 0 ;
    cin >> n ;
    while(n--)
    {
        string s ;
        int b, a ;
        cin >> s >> b >> a ;
        if(b < a and b >= 2400) no++ ;
    }
    if(no == 0) cout << "No" << endl ;
    else cout << "Yes" << endl ;
}
int32_t main()
{
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