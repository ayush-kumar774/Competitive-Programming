// https://codeforces.com/contest/712/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr[n], ans[n] ;
    for(auto &x : arr) cin >> x ;
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        if(i == n - 1) ans[i] = arr[i] ;
        else
        {
            ans[i] = arr[i] + arr[i + 1] ;
        }
    }
    for(auto x : ans) cout << x << " " ;
    cout << endl ;
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